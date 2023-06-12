# Animal_Inheritance
Inheritance Animal-Dog-Cat Classes Project

This project demonstrates the use of inheritance in C++ with the Animal,
Dog, and Cat classes. The Animal class serves as the base class, while
the Dog and Cat classes inherit from it.

Classes and their functionality:

1. Animal:
   - The Animal class represents a generic animal and provides the common
   attributes and behaviors shared by all animals.
   - It has a name attribute that can be set and retrieved.
   - The makeSound() function is a pure virtual function, meant to be 
   overridden by derived classes.

2. Dog:
   - The Dog class inherits from the Animal class and represents a specific 
   type of animal, a dog.
   - It adds additional attributes such as breed, age, and fetchCount 
   (to track the number of items fetched).
   - The Dog class has various constructors for creating dog objects with 
   different initializations.
   - It provides functions to get and set the breed and age of the dog.
   - The makeSound() function is overridden to make the dog bark.
   - The fetchItem() function allows the dog to fetch an item, incrementing 
   the fetchCount and displaying fetch information.

3. Cat:
   - The Cat class also inherits from the Animal class and represents a 
   specific type of animal, a cat.
   - It adds additional attributes such as color and age.
   - The Cat class has constructors for creating cat objects with different initializations.
   - It provides functions to get and set the color and age of the cat.
   - The makeSound() function is overridden to make the cat meow.

Usage:

1. Compile the source files using a C++ compiler.
2. Run the compiled program to see the demonstration of the Animal, Dog,
and Cat classes.
   - The program creates instances of Dog and Cat objects, demonstrating 
   various operations such as retrieving information, modifying attributes,
   and invoking behaviors.
   - The Dog objects showcase the fetchItem() function, which allows the
   dog to fetch items until it gets tired.

Please refer to the source code files for detailed implementation and 
further understanding of the classes and their usage.

