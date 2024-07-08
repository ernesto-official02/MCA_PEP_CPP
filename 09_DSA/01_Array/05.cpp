//pair sum in arrays 
#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void findPairsWithSum(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
            }
            // else{
            //     cout<<"pair sum not found\n";
            // }
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
   cout<<"The entered array is :\n";
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"The target pair sum you want : \n";
 int pairsum;
 cin>>pairsum;

   findPairsWithSum(arr,n,pairsum);


return 0;
}