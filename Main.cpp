#include "Structs.h"

int main() {
	cout << "hello world" << endl;
	
	// create Fruit variables
	// this is when memory is allocated
	// not when we define the struct
	Fruit myFruit = {"kiwi", "brown", 1.2};
	// what happens if we try to print myFruit
	//cout << myFruit << endl;
	// we can't print our structs until we learn about operator overloading (223 topic)
	// we can define a function printFruit(Fruit)
	// the dot operator . 
	// AKA direct member (AKA component) selection operator
	cout << myFruit.type << endl;
	// note: structs are pass by value
	// task: define printFruit(Fruit) in Structs.cpp
	// call it here in main()
	printFruit(myFruit);
	
	// we can have pointers to structs
	Fruit * myFruitPtr = NULL;
	myFruitPtr = &myFruit;
	//cout << *myFruitPtr.type << endl;
	// compiler error because
	// . has higher precedence than *
	cout << (*myFruitPtr).type << endl;
	// -> arrow operator
	// AKA indirect member (AKA component) selection operator
	cout << myFruitPtr->type << endl;
	// -> dereferences AND selects
	
	// assignment is okay
	// makes a copy
	Fruit myOtherFruit = myFruit;
	
	// relational operators like ==
	// not okay!!
	// CPSC 223 operator overloading
	// Tuesday: we will write compareFruits(Fruit *, Fruit *)
	// return -1 if left fruit param < right fruit param
	// return 1 if right fruit param > left fruit param
	// return 0 if the fruit params are the same
	
	

	return 0;
}
