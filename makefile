main:main.cpp class.h class.o
	g++ -o out main.cpp class.o

class.o:class.cpp class.h
	g++ -c class.cpp class.h
