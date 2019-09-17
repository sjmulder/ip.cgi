CFLAGS  += -Wall -Wextra -O2
LDFLAGS += -static

all: ip.cgi

clean:
	rm -f ip.cgi

install:
	install -s -m755 ip.cgi /var/www/cgi-bin

.PHONY: all clean install
