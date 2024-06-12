//pass by value concepts using c++
#include<iostream>

using namespace std;

void test(int n)
{  n++;
    cout<<"From test : "<<n<<endl;
}
int main()
{   int n ;
    cin>>n;
   test(n);
   cout<<"From test : "<<n<<endl;

}