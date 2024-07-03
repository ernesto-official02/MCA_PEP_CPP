//wave print
#include<iostream>
using namespace std;

void waveprint(int arr[][4],int r ,int c)
{
    for(int col=0;col<4;col++)
    {
        if(col%2==1)
        {
            for(int row=row-1;row>0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=0;row<3;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
int main()
{
    int arr[3][4]={10,2,31,41,51,65,84,98,41,69,5,43};
    waveprint(arr,3,3);
}