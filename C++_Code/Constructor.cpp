#include <iostream>

using namespace std;

class MyFirstClass
{
    string name;
    public:

        MyFirstClass()
        {
            cout << "MyFirstClass Empty Constructor"<<endl;
            name = "NoName";
        }

        MyFirstClass(string name)
        {
            this->name =  name;
            cout << "MyFirstClass Constructor"<<endl;
        }

        MyFirstClass (const MyFirstClass &old_obj)
        {
            cout << "MyFirstClass Copy Constructor"<<endl;
            this->name = old_obj.name;
        }

        void print()
        {
                cout << " The name of the object is "<< name << endl;
        }

        void assign_value(string name)
        {
            this->name = name;
        }

        MyFirstClass& operator = (const MyFirstClass &old_obj) 
        { 
            cout<<"Assignment operator called "<<endl; 
            return *this; 
        }
        ~MyFirstClass()
        {
            cout << "Destroying "<< name << endl;
        }
};

MyFirstClass foo_method_call_by_value(MyFirstClass obj)
{
    obj.print();
    obj.assign_value("Temp Object");
    obj.print();
    return obj;
}

int main()
{
    MyFirstClass object;
    object.print();

    MyFirstClass object1("Object 1");
    object1.print();

    MyFirstClass object2 = object;
    object2.print();
    object2.assign_value("Object 2");
    object2.print();

    object2 = object1;
    object2.print();

    MyFirstClass object3 = foo_method_call_by_value (object);

    return 0;
}