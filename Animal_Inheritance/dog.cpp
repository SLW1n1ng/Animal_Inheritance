#include <iostream>
#include "dog.h"

Dog::Dog() : breed("Any dog breed "), age(0) { fetchCount = 0; }			// default constructor 
Dog::Dog(std::string breed, int age) : Animal(), breed(breed), age(age) {   // overload constructor
    sound = "Woof!\n";                                                      // set sound to "Woof!\n"
    fetchCount = 0; 
}	 
Dog::~Dog() {}					                                            // destructor implementation
Dog::Dog(const Dog& copy) : Animal(copy.name), breed(copy.breed), age(copy.age), fetchCount(0) {}

std::string Dog::getBreed() const { return breed; }                         // get prototypes for breed
int Dog::getAge() const { return age; }										// get prototypes for age

void Dog::setBreed(std::string breed) { this->breed = breed; }				// set prototypes for breed
void Dog::setAge(int age) { if (age < 30 && age > 0) { this->age = age; } else { this->age = 0; } } // set prototypes for age

void Dog::makeSound() const { std::cout << sound << std::endl; }            // pure virtual function for makeSound
void Dog::fetchItem(const std::string& item) {                              // prototypes for fetchItem
    fetchCount++;                                                           // increment fetchCount
    if (fetchCount >= 10) {													// if fetchCount is greater than or equal to 10
        name += " fetched the " + item;								        // append " fetched " + item to name
        std::cout << "fetchCount = " << fetchCount << ". " << name << ". The dog is tired.\n" << std::endl;
        fetchCount = 0;	                                                    // reset fetchCount to 0
        return; 
    }
    std::cout << "fetchCount = " << fetchCount << "." << name << " fetched the " << item << std::endl;
}
void Dog::fetchItemExtended(const std::string& item) {
    fetchCount++;
    if (fetchCount >= 20) {
        std::cout << "fetchCount = " << fetchCount << ". " << name << ". The dog is tired." << std::endl;
        fetchCount = 0;
        return;
    }
    std::cout << "fetchCount = " << fetchCount << ". " << name << " fetched the " << item;
}

std::string Dog::getDogInfo() const {                                           // getDogInfo implementation
    return "Name: " + getName() + "\nBreed: " + breed + "\nAge: " + std::to_string(age) + "\n";
 }			
