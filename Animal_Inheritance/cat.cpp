#include "cat.h"
#include <iostream>

Cat::Cat() : Animal(), color("Any cat color"), age(0) {}							// default constructor implementation
Cat::Cat(std::string color, int age) : Animal(), color(color), age(age) { sound = "Meow!\n"; }	// constructor
Cat::~Cat() { std::cout << "Meeeowr!!..." << std::endl; }							//destructor implementation
Cat::Cat(const Cat& copy) : Animal(copy.name), color(copy.color), age(copy.age) {}	// copy cat constructor 

std::string Cat::getColor() { return color; }						// get functions for color
int Cat::getAge() { return age; }									// get functions for  age 

void Cat::setColor(std::string color) { this->color = color; }		// set functions for color
void Cat::setAge(int age) { if (age < 30 && age > 0) { this->age = age; } else { this->age = 0; } }	// set functions for age

void Cat::makeSound() const { std::cout << sound << std::endl; }	// pure virtual function for makeSound

std::string Cat::getCatInfo() const {								// getCatInfo implementation
	return "Name: " + getName() + "\nColor: " + color + "\nAge: " + std::to_string(age) + "\n";
}			