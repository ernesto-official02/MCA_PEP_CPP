//concept understanding the polymorphism
//compile time polymorphism

#include <iostream>

using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    std::cout << "Sum of 3 and 5 (int): " << calc.add(3, 5) << std::endl;

    std::cout << "Sum of 3.5 and 2.7 (double): " << calc.add(3.5, 2.7) << std::endl;

    return 0;
}
