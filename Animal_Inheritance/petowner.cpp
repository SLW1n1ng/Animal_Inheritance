#include "petowner.h"
#include <iostream>

PetOwner::PetOwner(const std::string& dogName, const std::string& catName) : totalFetches(0) {
    dog.setName(dogName);
    cat.setName(catName);
}
void PetOwner::playFetchWithDog(const std::string& item) {
    dog.fetchItemExtended(item);

    totalFetches++;
    if (totalFetches >= 20) {
        std::cout << "The owner needs a break from playing." << std::endl;
        totalFetches = 0;
        dog.setName(dog.getName() + " " + std::to_string(totalFetches));
    }
}

void PetOwner::hearAnimalSound(const Animal& animal) {
    animal.makeSound();
}
Dog PetOwner::getDog() const {
    return dog;
}

Cat PetOwner::getCat() const {
    return cat;
}
