#include <iostream>  
using namespace std;  
class Address {  
    public:  
    string addressLine, city, state;    
    Address(string addressLine, string city, string state)    
    {    
        this->addressLine = addressLine;    
        this->city = city;    
        this->state = state;    
    }    
};  
class Student    
    {    
        private:  
        Address* address;  //Student HAS-A Address   
        public:  
        int id;    
        string name;    
        Student(int id, string name, Address* address)    
       {    
           this->id = id;    
           this->name = name;    
           this->address = address;    
       }    
     void display()    
       {    
           cout<<id <<" "<<name<< " "<<     
             address->addressLine<< " "<< address->city<< " "<<address->state<<endl;    
       }    
   };   
int main(void) {  
    Address addr= Address("G-146, Sector#5, Niladri Vihar","BBSR","Orissa");    
    Student student1 = Student(101,"Barin",&addr);    
    student1.display();   
   return 0;  
}  