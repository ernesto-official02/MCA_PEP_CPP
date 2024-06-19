//max element from array using functions
#include<iostream>

using namespace std;

void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int greatest(int arr[], int size)
{
   int max=arr[0];

   for(int i=0;i<size;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
    }
   
   }
    return max;
}


int main()
{    
    int n;
    cin>>n;
    int arr[n];
    generate_array(arr , n);
    int size = sizeof(arr) / sizeof(arr[1]);

    int max = greatest(arr, size);

   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
    cout<<"greatest number in this array is : "<<max<<endl;
}