//selection _sort
#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void selection_sort(int arr[],int size)
{
    for(int i =0 ; i<size;i++)
    {    int min_idx=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_idx])
            {
               min_idx=j;
            }
            swap(arr[min_idx],arr[i]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    generate_array(arr , n);
    int size = sizeof(arr) / sizeof(arr[1]);


    selection_sort(arr,size);
    for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;


}