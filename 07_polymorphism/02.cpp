#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    // Virtual function eat
    virtual void eat() {
        cout << "Animal is eating generic food." <<endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override eat function
    void eat() override {
        cout << "Dog is eating bones." <<endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override eat function
    void eat() override {
        cout << "Cat is eating fish." << endl;
    }
};

int main() {
    Animal* animal1 = new Animal();
    Animal* animal2 = new Dog();
    Animal* animal3 = new Cat();

    animal1->eat();  // Output: Animal is eating generic food.
    animal2->eat();  // Output: Dog is eating bones.
    animal3->eat();  // Output: Cat is eating fish.

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
