.PHONY: all clean

all: libxtx.so libxtx.a

xtx.o: xtx.cpp xtx.h xtx_templates.hpp
	$(CXX) -O3 -fPIC -c xtx.cpp

libxtx.so: xtx.o
	$(CXX) -shared xtx.o -o libxtx.so

libxtx.a:
	ar -rcs libxtx.a xtx.o

xtx.cpp: GenerateCode.py Types.txt
	python GenerateCode.py

example: libxtx.so
	$(CC) example.c ./libxtx.so -o example

clean:
	rm -f libxtx.* *.o example

