.PHONY: all
OPT=-O2
# OPT=-g
LDFLAGS=-L/opt/local/lib
LDLIBS=-lvncserver
CXXFLAGS=-Wall -I/opt/local/include -std=c++11 $(OPT)

all: text

clean:
	rm text text.o
