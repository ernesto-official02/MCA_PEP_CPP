//find the Last occurence of key 
#include<iostream>
using namespace std;

int Find_LastOccurence(int arr[], int size, int key)
{
    int start=0;
    int end = size -1;
    int result =-1;

    while(start<=end)
    {      
        int mid = (start + end)/2;

        if(arr[mid]==key)
        {
            result = mid;
            start= mid + 1;
        }

        else if(key>arr[mid])
        {
            start =mid+1;
        }
        else{
            end =mid-1;
        }
       
    }
    return result;
}
int main()
{
   int arr[6]={2,2,3,3,4,4};
   int size = sizeof(arr)/sizeof(arr[0]);
   int key=3;
   int result=Find_LastOccurence(arr,size,key);

   if (result != -1)
        cout << "last occurence found at index " << result <<endl;
    else
        cout << "Element not found in array" <<endl;

   return 0;
}