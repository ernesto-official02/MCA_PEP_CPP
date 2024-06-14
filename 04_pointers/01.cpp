//understanding pointers in cpp

#include<iostream>

using namespace std;

int main()
{
    int var =5;
    cout<<"here's the address or variable named as var"<<endl;
    cout<<&var<<endl;//address
    int *get= &var;
    //pointer refrencing 
    cout<<get<<endl;//address
    //pointer dereferencing  // getting or accesing the value of stored value of address
    cout<<*get<<endl;//value
    //address of the pointer
    cout<<&get<<endl;//address of ptr


    //double pointer

    int **ptr2=&get;
    cout<<"Address of  pointer using another double pointer "<<endl;
    cout<<ptr2<<endl;//get address
    //deferencing the double pointer
    cout<<**ptr2<<endl;
}