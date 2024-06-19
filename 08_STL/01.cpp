//generic template
#include <iostream>
using namespace std;

// Template function to add two numbers of any type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Adding two integers
    int sum_int = add(3, 5);
    cout << "Sum of integers: " << sum_int <<endl;

    // Adding two doubles
    double sum_double = add(3.5, 2.7);
    cout << "Sum of doubles: " << sum_double <<endl;

    // Adding two floats
    float sum_float = add(1.2f, 3.4f);
    cout << "Sum of floats: " << sum_float <<endl;

    return 0;
}
