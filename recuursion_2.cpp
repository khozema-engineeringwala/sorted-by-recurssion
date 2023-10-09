#include <iostream>
using namespace std;
int solve(int n){
  if(n==0){
    return 1;
  }
  int ans=n*solve(n-1);
  return ans;
}
int main() {
  int n;
  cout<<"enter the value"<<endl;
  cin >> n;

  int ans1=solve(n);
  cout<<ans1;

  return 0;
}
