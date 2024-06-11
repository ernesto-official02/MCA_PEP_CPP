#include<iostream>
using namespace std;


void fact(int num)
{   int sum =1;
    for(int i =1 ; i<=num ;i++)
    {
    
        sum*=i;

    }
    cout<<sum<<endl;
}
int main()
{
    int num;
    cout<<"ENter the you want to get the factorial"<<endl;
    cin>>num;
    fact(num);

}