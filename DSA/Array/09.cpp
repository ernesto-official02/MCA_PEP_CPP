#include<iostream>
using namespace  std;

int uniquelements(int arr[], int size)
{
    int i =0;
    for(int j =i+1;j<size; j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main()
{
    int arr[]={1,1,2,2,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<uniquelements(arr,size);

    return 0;
}