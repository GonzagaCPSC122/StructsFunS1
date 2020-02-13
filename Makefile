# Makefile is a script full of rules
# about how to compile and run your project
all:
	g++ Main.cpp Structs.cpp -o runStructsFun
	./runStructsFun
compile:
	g++ Main.cpp Structs.cpp -o runStructsFun
run:
	./runStructsFun
