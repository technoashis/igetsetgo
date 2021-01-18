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
    virtual void make_sound(){
        cout << "I do not know which sound need to Make!" << endl;
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
    Animal *animalPtr;
    Animal animal1;
    animalPtr =  &animal1;
    animalPtr -> make_sound();

    Cat cat1;
    animalPtr =  &cat1;
    animalPtr -> make_sound();
    
    return 0;
}
