//vectors
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vector1={1,2,3,4};

    vector<int>::iterator itr;
    itr =vector1.begin();

    cout<<*itr<<endl;

    // for(int item : vector1)
    // {
    //     cout<<item<<" ";
    // }
}