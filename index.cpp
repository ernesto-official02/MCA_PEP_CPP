//program for if else conditional statement
#include<iostream>
using namespace std;

int main()
{
    double marks1 , marks2 , marks3;
    cout<<"enter marks of subject1 : - ";
    cin>>marks1;
    cout<<"enter marks of subject2 : - ";
    cin>>marks2;
    cout<<"enter marks of subject3 : - ";
    cin>>marks3;
    double total_marks=marks1+marks2+marks3;
    cout<<"Total marks of the student :-"<<total_marks<<endl;
    double percentage= (total_marks/300)*100;
    cout<<percentage<<endl;
    if(percentage<60)
    {
        cout<<"The student is fail"<<endl;
    }

    else
    {
        cout<<"The student is passed"<<endl;
    }

    return 0;
}