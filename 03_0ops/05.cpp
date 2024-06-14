//parameterized constructor in cPP

#include<iostream>

using namespace std;

class ABC
{
    private:

    int empID;
    public:
    //default constructor 
    ABC()
    {
        cout<<"Default constructor is called "<<endl;

    }
     //parameterized constructor
    ABC(int id)
    {
        empID=id;
    }

    void display()
    {
        cout<<"Employee id is : "<<empID<<endl;
    }
};
int main()
{
    ABC obj;
    ABC obj2(878);

    obj2.display();
}