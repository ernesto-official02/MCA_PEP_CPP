//bubble _sort
#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void Bubble_sort(int arr[],int size)
{
    for(int i =size ; i>0;i--)
    {    int swapped= false;
        for(int j=0;j<i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped=true;
            }
        }
        if(swapped==false) break;
    }
}
int main()
{
    int n;
    cin>>n;     
    int arr[n];
    generate_array(arr , n);
    int size = sizeof(arr) / sizeof(arr[1]);


    Bubble_sort(arr,size);
    for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;


}