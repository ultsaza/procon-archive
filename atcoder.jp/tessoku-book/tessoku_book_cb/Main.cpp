#include<iostream>
using namespace std;

int main () {
  int n; cin >> n;
  bool b=0;
  int a[n]; for(int i=0;i<n;i++) {cin >> a[i];}
  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      for(int k=j+1;k<n;k++) {
        if(a[i]+a[j]+a[k]==1000) {
          b=1;
        }
      }
    }
  }
  if(b) cout << "Yes";
  else  cout << "No";
}