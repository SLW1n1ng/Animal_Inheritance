#ifndef DOG_H
#define DOG_H
#include <string>
#include "animal.h"

class Dog : public Animal {								//Dog class inherits from Animal class

private:												//Member variables
	std::string breed;
	int age;
	int fetchCount;

public:
	Dog();												//default constructor
	Dog(std::string breed, int age);					//overload constructor prototype 
	~Dog();												//destructor prototype
	Dog(const Dog& copy);								//copy constructor

	std::string getBreed() const;						//get prototypes for breed
	int getAge() const;									//get prototypes for age

	void setBreed(std::string breed);					//set prototypes for breed
	void setAge(int age);								//set prototypes for age

	void makeSound() const override;					//Member functions prototypes for makeSound
	void fetchItem(const std::string& item);			//Member functions prototypes for fetchItem
	void fetchItemExtended(const std::string& item);

	std::string getDogInfo() const;						//Member functions prototypes for getDogInfo

};

#endif // !DOG_H
