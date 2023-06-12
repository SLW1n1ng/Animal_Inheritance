#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{
protected:
	std::string sound;						//Member variable for sound 
	std::string name;						//Member variables

public:	
	Animal();								//default constructor
	Animal(const std::string& name);		// constructor
	virtual ~Animal();						// destructor

	const std::string& getName() const;		// get function for name
	void setName(const std::string& name);	// set function for name

	virtual void makeSound() const = 0;		// pure virtual function
};
#endif // !ANIMAL_H
