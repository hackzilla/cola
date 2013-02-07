# use gcc for compilation
CC = gcc

all: install

install:
	@echo ""
	@echo "Building cola binary..."
	@${CC} core/cola.c -o cola
	@echo "Successfully built cola binaries!"
	@echo ""

clean:
	@rm -f cola *.o
