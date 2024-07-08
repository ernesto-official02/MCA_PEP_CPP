// 2 dimensional array
#include<iostream>
using namespace std;
int is_keyPresent(int arr[][3], int target , int r , int c)
{
        for(int i =0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            if(arr[i][j]==target)
            {
                return arr[i][j];
            }
        }
    }
}
int main()
{
    int arr[3][3];

    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
       cout<<"matrix 2d"<<endl;
        for(int i =0;i<3;i++){
        for(int j =0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    int key ;
    cout<<"enter the key u want to find :"<<endl;
    cin>>key;
    is_keyPresent(arr,key,3,3);

}