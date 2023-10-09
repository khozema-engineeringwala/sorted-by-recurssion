#include <iostream>
using namespace std;

int sum(int n) {
  // Base cases
  if (n == 1)
    return 1;
  if (n == 0)
    return 0;

  // Processing and recursive call
  int som = n + sum(n - 1);
  return som;
}

int main() {
  int n = 3;
  int ans = sum(n);
  cout << ans;

  return 0;
}
