#include <iostream>
using namespace std;

class MyFirstClass
{
    public:
        int n;
        void print()
        {
            cout << " The value of n is "<< n << endl;
            
        }
};

int main()
{
    MyFirstClass object;
    object.n = 10;
    object.print();

    MyFirstClass *objectPtr = new MyFirstClass();
    objectPtr->n =15;
    objectPtr->print();
    
    return 0;
}