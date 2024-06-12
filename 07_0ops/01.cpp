//class and objects 
#include<iostream>

using namespace std;

class id
{
    public:
    string name ;
    int age;
    int rollno;

    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"rollno is : "<<rollno<<endl;
    }

};
int main()
{
    id student;
    student.name="Ernest anmol";
    student.age=76;
    student.rollno=657;

    id student2;
    student2.name="Akashdeep";
    student2.age=769;
    student2.rollno=6570;

    student.show();
    student2.show();


}