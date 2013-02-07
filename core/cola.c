#include <stdio.h>
#include "cola.h"

int PRINTS_() { puts((char*)*sp++); STEP; }

int kwdhook_(char *msg) {
	if (!strcmp(msg,"PRINTS"))
		expr(), emit(PRINTS_);
	else	return 0;
	return 1;
}

int main(int argc, char *argv[]) {
	FILE *sf=stdin;
	initbasic(argc);

	kwdhook=kwdhook_;
	if (argv[1])
		if (sf=fopen(argv[1],"r"))
			compile++;
		else {
			printf("CANNOT OPEN: %s\n", argv[1]);
			return 255;
		}
	return interp(sf);
}
