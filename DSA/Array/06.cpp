//Triplet sum in arrays 
#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void findTripletSum(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == targetSum) {
                    cout << "Triplet found: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")\n";
                }
            }
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
   cout<<"The target triplet sum you want : \n";
 int tripletsum;
 cin>>tripletsum;

   findTripletSum(arr,n,tripletsum);


return 0;
}
