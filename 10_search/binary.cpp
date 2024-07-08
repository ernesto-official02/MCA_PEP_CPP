#include<iostream>
using namespace std;

bool binary(int arr[], int size, int key)
{
    int start=0;
    int end = size -1;
    int mid = (start + end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return true;
        }

        if(key>arr[mid])
        {
            start =mid+1;
        }
        else{
            end =mid-1;
        }
        mid=(start+end)/2;
    }
    return false;
}
int main()
{
   int arr[4]={1,2,3,4};
   int size = 4;
   int key=3;
   int result =binary(arr,size,key);

   if (result != -1)
        cout << "Element found at index " << result <<endl;
    else
        cout << "Element not found in array" <<endl;

   return 0;
}