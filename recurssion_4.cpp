#include <iostream>
using namespace std;

int fibonacci(int n) {
  // Base cases
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;

  // Processing and recursive call
  int fib_ans = fibonacci(n - 1) + fibonacci(n - 2);
  return fib_ans;
}

int main() {
  int n = 25;
  int ans = fibonacci(n);
  cout << ans;

  return 0;
}
