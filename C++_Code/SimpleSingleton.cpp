#include <iostream>
using namespace std;

class Singleton
{
    private:
        /* Here will be the instance stored. */
        static Singleton* instance;

        /* Private constructor to prevent instancing. */
        Singleton();

    public:
        /* Static access method. */
        static Singleton* getInstance();
        ~Singleton();
};

/* Null, because instance will be initialized on demand. */
Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance()
{
    if (!instance)
    {
        instance = new Singleton(); // Creating new instance
    }
    else
    {
        cout << "Returning same reference" <<endl;
    }

    return instance;
}

Singleton::Singleton()
{
    std::cout<<"Calling Constructor" <<endl;
}

int main()
{
    //new Singleton(); // Won't work
    Singleton* object1 = Singleton::getInstance(); // Ok
    Singleton* object2 = Singleton::getInstance();

    /* The addresses will be the same. */
    std::cout << object1 << std::endl;
    std::cout << object2 << std::endl;
    
}