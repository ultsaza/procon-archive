#include<iostream>
using namespace std;

int n,X,a[100009];

int search(int x) {
  int l=1,r=n;
  while(l<=r) {
    int m=(l+r)/2;
    if(x<a[m]) r=m-1;
    if(x==a[m]) return m;
    if(x>a[m]) l=m+1;
  }
}

int main() {
  cin >> n >> X;
  for(int i=1;i<=n;i++) {
    cin >> a[i];
  }
  int ans=search(X);
  cout << ans << endl;
}
