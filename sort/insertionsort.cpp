//insertion _sort    checking left side and swap `
#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void Insertion_sort(int arr[],int size)
{
    for(int i =0 ; i<size;i++)
    { 
       int j =i;
       while(j>0 && arr[j-1]>arr[j])
        {
           swap(arr[j-1],arr[j]);
           j--;

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


    Insertion_sort(arr,size);
    for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;


}