#include<set>
#include<iostream>

using namespace std;

int main()
{
    set<int> set1={1,1,2,2,2,3,3};

   ///set1.insert(20) ;
//set1.erase(8);

for(int i : set1)
{
    cout<<i<<" ";
}

// for(int i=0; i<5;i++)
// {
//     cout<<set1;
// }
}