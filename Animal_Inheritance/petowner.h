#ifndef PETOWNER_H
#define PETOWNER_H

#include "animal.h"
#include "dog.h"
#include "cat.h"

class PetOwner {
private:
    Dog dog;
    Cat cat;
    int totalFetches;

public:
    PetOwner(const std::string& dogName, const std::string& catName);

    void playFetchWithDog(const std::string& item);
    void hearAnimalSound(const Animal& animal);

    Dog getDog() const; // Getter function for the Dog object
    Cat getCat() const; // Getter function for the Cat object
};

#endif // PETOWNER_H
