//task 1  program    //getter setter

#include<iostream>

using namespace std;



class student
{
    private:

    string name;
    int rollno;
    int age;
    char grade;

    public:
     
     string getName()
     {
        return name;
     }

     void setName(string newName)
     {
        this->name=newName;
     }

    int getrollno()
     {
        return rollno;
     }

    void setRollno(int newrollno)
     {
        this->rollno=newrollno;
     }

    int getage()
     {
        return age;
     }

    void setAge(int newAge)
     {
        this->age=newAge;
     }

    char getgrade()
     {
        return grade;
     }

     void setGrade(char newGrade)
     {
        this->grade=newGrade;
     }

     void print()
     {
        cout<<"The name is : "<<name<<endl;
        cout<<"The rollno is : "<<rollno<<endl;
        cout<<"The age is : "<<age<<endl;
        cout<<"The grade is : "<<grade<<endl;
     }


};
int main()
{
    student obj;
    obj.setName("ernest");
    cout<<obj.getName();
    obj.print();

}