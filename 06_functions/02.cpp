//ncr practical program
//  8c2 = 8!/2!*6!


#include<iostream>
using namespace std;




int fact1(int n)
{   int sum =1;
    for(int i =1 ; i<=n ;i++)
    {
    
        sum*=i;

    }
    return sum;
}

int  fact2(int r)
{   int sum =1;
    for(int i =1 ; i<=r ;i++)
    {
    
        sum*=i;

    }
    return sum;
}

int fact3(int n ,int r)
{   int sum =1;
    int t =n-r;
    for(int i =1 ; i<=t;i++)
    {
    
        sum*=i;

    }
    return sum;
}


int combination(int a , int b, int c)
{
    return a/b*c;
    
}





int main()

{
    int n , r;

    cout<<"enter the value of c "<<endl;
    cin>>n;
    cout<<"enter the value of c"<<endl;

    cin>>r;

    
   int a= fact1(n);
   int b= fact2(r);
   int c=fact3(n ,r);

   int ans= combination(a,b,c);
   cout<<"The combination value of ncn is : ";
   cout<<ans;

}