#include<iostream>

using namespace std;

class Student
{
    private:

    string name;
    int rollno;
    public:
    //default constructor 
    Student()
    {
        cout<<"\tStudent results: "<<endl;
        cout<<"------------------------------"<<endl;

    }
     //parameterized constructor
    Student(string n,int rno)
    {
        name=n;
        rollno=rno;
    }

    void display()
    {
        cout<<"\tStudent name is : "<<name<<"\n "<<" \troll no is: "<<rollno<<endl;
    }
    
    //destructor
    ~Student()
    {
        cout<<"Destructor called "<<endl;
    }
};
int main()
{
    Student obj;
    Student obj2("Ernest",89);

    obj2.display();
}