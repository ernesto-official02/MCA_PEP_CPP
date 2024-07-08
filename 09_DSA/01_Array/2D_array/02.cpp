// 2 dimensional array
#include<iostream>
using namespace std;

void genrate_2d_Array(int arr[] ,int r , int c)
{
    
    for(int i =0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            cin>>arr[r];
        }
    }
}

// bool iskeyPresent(int arr[][3], int target , int r , int c)
// {
//         for(int i =0;i<r;i++)
//     {
//         for(int j =0;j<c;j++)
//         {
//             if(arr[i][j]==target)
//             {
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     }
// }

//delete []ptr

int main()
{
    int r , c;
    cout<<"Enter the row collumn :"<<endl;
    cin>>r>>c;
    int *arr = new int[r];
    int **arr = new int*[c];

    genrate_2d_Array(arr,r,c);

       cout<<"matrix 2d"<<endl;
        for(int i =0;i<r;i++){
        for(int j =0;j<c;j++)
        {
            cout<<arr[r]<<" ";

        }
        cout<<endl;
    }

}