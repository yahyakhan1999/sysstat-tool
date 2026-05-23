CC = gcc
CFLAGS = -Wall -O2
BINARY = sysstat

all:
	$(CC) $(CFLAGS) -o $(BINARY) src/sysstat.c

install:
	install -D -m 0755 $(BINARY) $(DESTDIR)/usr/bin/$(BINARY)

clean:
	rm -f $(BINARY)
