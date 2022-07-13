makefile: 
#  call using MinGW32-make
	g++	-I header\ main.cpp functions.cpp -o -std=c++20 -Wall -Wextra main.exe