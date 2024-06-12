//function overloading in c++
#include<iostream>

using namespace std;

int add(int a ,int b)
{
    return a+b;
}

float add(float a ,float b)
{
    return a+b;
}

double add(double a ,int b,double c)
{
    return a+b;
}
int main()
{
   cout<<add(4,5)<<endl;
   cout<< add(4.4,5)<<endl;
    cout<<add(4.5,5.0,6.2)<<endl;
   
}