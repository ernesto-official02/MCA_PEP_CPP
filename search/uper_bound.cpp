//upperbound bound in  an array
//given a sorted array of n integers and an integer c , write a program to find lower bound of x;

//
#include<iostream>
using namespace std;

void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}


int lower_bound(int arr[],int size,int x)
{
    int start=0;
    int end = size -1;
    int mid = (start + end)/2;
    int result =size;

    while(start<=end)
    {      
        

        if(arr[mid]>=x )
        {
            result = mid;
            end= mid +1;
        }

        else
        {
            start =mid+1;
        }
        mid = (start + end)/2;
    }
    return result;
}

int main()
{
     int n;
    cin>>n;
    int arr[n];
    generate_array(arr , n);
    int size = sizeof(arr) / sizeof(arr[1]);
    int x;
    cout<<"enter the x : "<<endl;
    cin>>x;

    int result=lower_bound(arr,size, x);

    if(result!=-1)
    {
         cout<<"Uperbound is "<<result<<endl;

    }
    else{
        cout<<"Uperbound is "<<result<<endl;
    }
   
}