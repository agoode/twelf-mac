# path to RETRO68
RETRO68=/Retro68-INSTALL

PREFIX=$(RETRO68)/m68k-apple-macos
CC=$(RETRO68)/bin/m68k-apple-macos-gcc
CXX=$(RETRO68)/bin/m68k-apple-macos-g++
REZ=$(RETRO68)/bin/Rez

CFLAGS=-I/build/twelf/bin -g
RINCLUDES=$(PREFIX)/RIncludes
REZFLAGS=-I$(RINCLUDES)

Twelf.code.bin: twelf.o clikloop.o
	$(CC) $^ -o $@ $(LDFLAGS) -L/build/twelf/bin -L/build/gmp-m68k-INSTALL/lib -ltwelf -lgmp -lm

clikloop.o: clikloop.s
	$(CC) -ffunction-sections -c clikloop.s -o $@

Twelf.bin: Twelf.code.bin
	$(REZ) $(REZFLAGS) --copy $^ twelf.r -t "APPL" -c "TWLF" -o $@

.PHONY: clean
clean:
	rm -f Twelf.bin Twelf.APPL Twelf.dsk Twelf.code.bin Twelf.code.bin.gdb twelf.o clikloop.o
