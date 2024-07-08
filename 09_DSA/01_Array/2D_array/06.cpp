//spiral print arrray in 2d 
#include <iostream>
using namespace std;

void spiralPrint(int rows, int cols, int arr[][4]) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;


    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Print bottom row if there's still a row left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column if there's still a column left
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int rows = 4;
    int cols = 4;
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralPrint(rows, cols, arr);

    return 0;
}
