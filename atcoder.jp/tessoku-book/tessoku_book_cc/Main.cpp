#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int oput=0;
  int div=10;
  for(int i=0;i<8;i++) {
    if(n%2 == 1) {
      oput+=(1<<i);
    }
    n /=10;
  }
  cout << oput << endl;
}