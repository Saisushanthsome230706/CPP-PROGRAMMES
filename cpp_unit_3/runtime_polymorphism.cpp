#include <iostream>

class Animal {
public:
    virtual void makesound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makesound() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makesound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* myAnimal;
    Dog myDog;
    Cat myCat;

    myAnimal = &myDog;
    myAnimal->makesound();

    myAnimal = &myCat;
    myAnimal->makesound();

    return 0;
}
