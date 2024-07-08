#include<unordered_set>
#include<iostream>

using namespace std;

int main()
{
    unordered_set<int> set1={1,24,6,7,8};

   ///set1.insert(20) ;
//set1.erase(8);

for(int i : set1)
{
    cout<<i<<" ";
}
}