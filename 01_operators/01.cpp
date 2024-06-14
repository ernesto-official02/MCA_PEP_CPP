// number is even or not using butwise operator 

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number of your choice : ";
    cin>>num;
     //cout<<num & 1;
    (num & 1) ? ("Odd") : printf("Even");

}