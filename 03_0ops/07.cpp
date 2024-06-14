//inheritance
#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"eating"<<endl;
    }
};

class dog : public Animal
{
     public:
     void bark()
     {
      cout<<"barking"<<endl;
     }
};

int main()
{
    dog d1;
    d1.eat();
    
}