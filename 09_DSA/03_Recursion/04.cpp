#include<iostream>
using namespace std;

bool isorter(int arr[], int size)
{
    if(size==0||size==1)  return true;

    if(arr[0]>arr[1])
    {
        return false;
    }

    else{
        return isorter(arr +1, size -1);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<isorter(arr, 5);
}