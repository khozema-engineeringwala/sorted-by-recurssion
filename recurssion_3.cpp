#include <iostream>
using namespace std;
void printing(int n){
  // base case
  if(n==0){
    return ;
  }
// processing
cout<<n<<endl;
// reccurssive call
printing(n-1);
}
int main() {
  int n=5;
printing(n);
  return 0;
}
