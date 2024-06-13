//understanding pointers in cpp

#include<iostream>

using namespace std;

int main()
{
    int var =5;
    cout<<"here's the address or variable named as var"<<endl;
    cout<<&var<<endl;
    int *get= &var;
    //pointer refrencing 
    cout<<get<<endl;
    //pointer dereferencing  // getting or accesing the value of stored value of address
    cout<<*get<<endl;
    //address of the pointer
    cout<<&get<<endl;


    //double pointer

    int **ptr2=&get;
    cout<<"Address of  pointer using another double pointer "<<endl;
    cout<<ptr2<<endl;
    //deferencing the double pointer
    cout<<**ptr2<<endl;
}