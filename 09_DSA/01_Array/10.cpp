//kadane alogorith to get the largest sum of subrarray in particulat array
#include <iostream>
#include<climits>8
using namespace std;

int max_sum_subarray(int arr[], int size) {
  int max= INT_MIN;
  int sum =0;

  for(int i=0;i<size;i++)
  {
    sum+-arr[i];

    if(sum>max) max=sum;
    if(sum<0)sum=0;

    }
     return max;
  }
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int size=sizeof(arr)/sizeof(arr[0]);

    int max_sum = max_sum_subarray(arr, size);
    cout << "The maximum sum subarray has a sum of: " << max_sum << endl;

    return 0;
}
