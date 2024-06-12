// employee class to demonstrate classes and objects 
#include<iostream>
using namespace std;

class emp
{
    public:
    string name;
    int salary;

    void get()
    {
        cout<<"Enter the name of the employee"<<endl;
        cin>>name;
        cout<<"enter the salary of the employee "<<endl;
        cin>>salary;

    }

    void show ()
    {
       cout<<"The name of the employee is : "<<name<<endl;
       cout<<"The Salary of the employee is : "<<salary<<endl;
    }

};
int main()

{
    emp employee;
    employee.get();
    employee.show();

}