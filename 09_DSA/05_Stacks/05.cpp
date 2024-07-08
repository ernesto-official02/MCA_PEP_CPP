#include <iostream>
#include <vector>
using namespace std;

void insert_at_bottom(vector<int>& stack, int x) {
    if (stack.empty()) {
        stack.push_back(x);
    } else {
        int temp = stack.back();
        stack.pop_back();
        insert_at_bottom(stack, x);
        stack.push_back(temp);
    }
}

void print_stack(const vector<int>& stack) {
    for (int i = stack.size() - 1; i >= 0; --i) {
        std::cout << stack[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, x;
        cin >> n >> x;
        vector<int> stack(n);
        for (int j = 0; j < n; ++j) {
            cin >> stack[j];
        }
        insert_at_bottom(stack, x);
        print_stack(stack);
    }
    return 0;
}