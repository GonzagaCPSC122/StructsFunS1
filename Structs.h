#ifndef STRUCTS_H
#define STRUCTS_H
// header file guard code protects from double inclusion of this header file

#include <iostream>

using namespace std;

// a struct is a programmer defined collection of data members
// example: Fruit struct
// structs are defined in headers files
struct Fruit {
	string type;
	string color;
	double weight;
};

void printFruit(Fruit);

#endif
