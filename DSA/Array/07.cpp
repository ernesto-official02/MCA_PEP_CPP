//find the duplicate elements from the array

#include<iostream>

using namespace std;


void generate_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void findDuplicates(int arr[], int n) {
    bool found = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate element found: " << arr[i] << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "No duplicate elements found." << endl;
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

   findDuplicates(arr,n);

   return 0;

}