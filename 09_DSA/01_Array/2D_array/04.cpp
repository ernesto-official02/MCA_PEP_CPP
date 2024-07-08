// sum of array
#include<iostream>
using namespace std;


int main()
{
    int arr[2][2]={ 1,2,2,3};
     int max=0;
     for(int i=0;i<2;i++){
         int sum =0;
        for(int j=0;j<2;j++)
        {
            sum+=arr[i][j];

        }
        if(sum>max)
        {
            max=sum;
        }
       
    }
    cout<<max;
}