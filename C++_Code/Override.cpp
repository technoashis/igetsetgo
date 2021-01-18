#include <iostream>
using namespace std;

// base class
class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
    void make_sound(){
        cout << "I do not know which sound need to be made!" << endl;
    }
};

// derived class
class Dog : public Animal {
 
   public:
    void make_sound() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

// derived class
class Cat : public Animal {
 
   public:
    void make_sound() {
        cout << "I can Meow! Meow Meow!!" << endl;
    }
};

// derived class
class Dolphin : public Animal {
 
   public:
    void make_sound() {
        cout << "I can Whistel! Whistele Whistle!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;
    dog1.eat(); // Calling members of the base class
    dog1.sleep(); // Calling members of the base class
    dog1.make_sound(); // Calling member of the derived class

    Cat cat1;
    cat1.eat(); // Calling members of the base class
    cat1.sleep(); // Calling members of the base class
    cat1.make_sound(); // Calling member of the derived class

    Animal *animalPtr;
    
    Animal animal1;
    animalPtr =  &animal1;
    animalPtr -> make_sound();

    animalPtr =  &cat1;
    animalPtr -> make_sound();
    return 0;
}
