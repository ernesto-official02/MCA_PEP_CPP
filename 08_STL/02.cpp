#include <iostream>
using namespace std;
// Template class to add two numbers of any type
template <typename T>
class Adder {
public:
    T add(T a, T b) {
        return a + b;
    }
};

int main() {
    // Creating instances of Adder for different types
    Adder<int> intAdder;
    Adder<double> doubleAdder;
    Adder<float> floatAdder;

    // Adding two integers
    int sum_int = intAdder.add(3, 5);
    cout << "Sum of integers: " << sum_int <<endl;

    // Adding two doubles
    double sum_double = doubleAdder.add(3.5, 2.7);
    cout << "Sum of doubles: " << sum_double <<endl;

    // Adding two floats
    float sum_float = floatAdder.add(1.2f, 3.4f);
    cout << "Sum of floats: " << sum_float <<endl;

    return 0;
}
