all: libmystr.a libmyutils.a libmasking.a

TOPDIR=${PWD}
CFLAGS=-I${TOPDIR}/inc


libmystr.a:string.o
	ar rc $@ $^


libmyutils.a: utils.o
	ar rc $@ $^


libmasking.a: mask.o
	ar rc $@ $^
clean:
	rm -rf *.o *.a
