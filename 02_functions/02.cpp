//ncr practical program
//  8c2 = 8!/2!*6!


#include<iostream>
using namespace std;

int fact(int n)
{   int sum =1;
    for(int i =1 ; i<=n ;i++)
    {
    
        sum*=i;

    }
    return sum;
}

int combination(int n , int r)
{
    int num = fact(n);
    int denum=fact(r)*fact(n-r);
    return num/denum;
}


int main()

{
    int n , r;

    cout<<"enter the value of c "<<endl;
    cin>>n;
    cout<<"enter the value of c"<<endl;

    cin>>r;

   int ans= combination(n,r);
   cout<<"The combination value of ncn is : ";
   cout<<ans;

}