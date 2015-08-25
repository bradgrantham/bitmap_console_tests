.PHONY: all
OPT=-O2
LDFLAGS=-L/opt/local/lib -lvncserver
CXXFLAGS=-I/opt/local/include -std=c++11 $(OPT)

all: text

clean:
	rm text text.o
