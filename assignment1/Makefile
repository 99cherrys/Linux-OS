TARGET=sall.out
OBJS=test.o src/utils.o src/string.o src/mask.o

TOPDIR=${PWD}
CFLAGS=-I${TOPDIR}/inc
LDFLAGS = -lmystr -lmyutils -lmasking
LIBPATH=${PWD}/src

calls: sall.out

sall.out: test.o  libmystr.a libmyutils.a libmasking.a
	gcc -L${LIBPATH} $< -o $@ ${LDFLAGS}

libmystr.a:
	make -C src

libmyutils.a:
	make -C src

libmasking.a:
	make -C src

test.o: test.c inc/myutils.h inc/mystring.h inc/bitmask.h

run: calls
	./sall.out

all: calls run clean


clean: 
	rm -rf *.a *.o src/*.o src/*.a ${TARGET}




