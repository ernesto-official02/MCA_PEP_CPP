#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  if (num % 2 == 0) {
    return num == 2; 
  }

  for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int T;
  cin >> T;
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  while (T--) {
    int A, B;
    cin >> A >> B;
      
    for (int i = A; i < B; i++) {
      if (isPrime(i)) {
        cout << i << " ";
      }
    }
    
  }

  return 0;
}