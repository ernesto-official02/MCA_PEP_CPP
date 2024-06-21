//find the non dublicate or simply unique elements from array


#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    generate_array(arr , n);
    int size = sizeof(arr) / sizeof(arr[1]);
   cout<<"The entered array is :\n";
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}