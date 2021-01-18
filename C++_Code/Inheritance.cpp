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
};

// derived class
class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

// derived class
class Cat : public Animal {
 
   public:
    void meow() {
        cout << "I can Meow! Meow Meow!!" << endl;
    }
};

// derived class
class Dolphin : public Animal {
 
   public:
    void whistle() {
        cout << "I can Whistel! Whistele Whistle!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;
    dog1.eat(); // Calling members of the base class
    dog1.sleep(); // Calling members of the base class
    dog1.bark(); // Calling member of the derived class

    Cat cat1;
    cat1.eat(); // Calling members of the base class
    cat1.sleep(); // Calling members of the base class
    cat1.meow(); // Calling member of the derived class

    return 0;
}
