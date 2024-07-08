//reverse an array       also try to swap alternative indexes 
#include<iostream>

using namespace std;


void rev(int arr[], int size)
{
   int start= 0;
   int end=size-1;

   while(start<end) 
   {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

      start++;
      end--;
   }

}

int main()
{
    int arr[5]={1,2,3,4,5};
    int size =sizeof(arr)/sizeof(arr[0]);

    cout<<"The orginal Array: ";
    for(int i =0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rev(arr,size);
    
    cout<<"The Reversed Array: ";
    for(int i =0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    
    
}