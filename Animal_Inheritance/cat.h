#ifndef CAT_H
#define CAT_H
#include <string>
#include "animal.h"

class Cat : public Animal {				//Cat class
private:								//Member variables
	std::string color;
	int age;

public:
	Cat();								//default constructor
	Cat(std::string color, int age);	//constructor prototype
	~Cat();								//destructor prototype
	Cat(const Cat& copy);				//copy constructor

	std::string getColor();				//get prototypes for color
	int getAge();						//get prototypes for age

	void setColor(std::string color);	//set prototypes for color
	void setAge(int age);				//set prototypes for age

	void makeSound() const override;	//Member functions prototypes for makeSound
	std::string getCatInfo() const;		//Member functions prototypes for getCatInfo
};
#endif // CAT_H
