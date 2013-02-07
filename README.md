# Cola

Because BASIC was already taken.

## WAITWUT?

BASICally (see what I did there) Cola is my shamelessly-stolen BASIC interpreter from [this guy's epic code](https://github.com/jwillia3/BASIC). The interpreter itself is extremely small, and uses such standard C you can pretty much run it anywhere (with pretty much any compiler). Cola is great for embedding, as it's full interpreter is only about 300 lines of code.

## Building

Nothing special... just run:

```sh
$ make install
# or just
$ make
```

## Usage

### Using the executable

Once you `make` Cola's interpreter, you'll find the `cola` executable in your directory. Here's the BASIC (ok, no more puns) usage:

```sh
# If you've got cola in your ~/bin/ don't prepend './'

# run the cola REPL
$ ./cola

# run a file
$ ./cola name.cola
```

## Writing Cola Code

It's best you check out the `examples/` directory, but if you're really interested in using Cola, I've got a simple tutorial on [my blog]().
