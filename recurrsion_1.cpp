#include <iostream>
using namespace std;
int solve(int n){
  if(n==0){
    return 1;
  }
  int ans=2*solve(n-1);
  return ans;
}
int main() {
  int n=9;
  int ans1=solve(n);
  cout<<ans1;

  return 0;
}
