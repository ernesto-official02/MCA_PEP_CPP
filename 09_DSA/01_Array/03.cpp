//linear search 
#include<iostream>

using namespace std;

void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int linear_search(int arr[], int size , int target)
{
   int max=arr[0];

   for(int i=1;i<=size;i++)
   {
    if(arr[i]==target)
    {
        return i;
    }
   
   }
    return -1;
}


int main()
{    
    int n;
    cin>>n;
    int arr[n];
    generate_array(arr , n);

     for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
    cout<<"which number to search"<<endl;
    int target ;
    cin>>target;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linear_search(arr, size , target);

     if(index!= -1)
     {
        cout<<"Element "<<target<<" found at index "<<index<<endl;
    } else {
        cout<<"Element "<< target<<" not found in the array."<<endl;
    }
 
}