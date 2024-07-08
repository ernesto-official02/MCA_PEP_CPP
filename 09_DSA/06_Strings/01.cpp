#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(const string& s) {
    string result;

    for (char c : s) {

        if (!result.empty() && result.back() == c) {

            result.pop_back();
        } else {
            result.push_back(c);
        }
    }

    return result;
}

int main() {
    string s = "abbaca";
    cout << "Final string after duplicate removals: " << removeDuplicates(s) << std::endl;
    return 0;
}
