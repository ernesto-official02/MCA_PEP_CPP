//concept of Encapsulation and constructor  , destructor and keywords such as 'this'
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
    Student(string name,int rollno)
    {
        this->name=name;
        this->rollno=rollno;
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