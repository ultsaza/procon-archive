#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
  int n,l;
  vector<int> a(200009);
  vector<char> b(200009);
  cin >> n >> l;
  for(int i=0;i<n;i++) {
    cin >> a[i] >> b[i];
  }
  int ans=0;
  for(int i=0;i<n;i++) {
    if(b[i]=='E') ans = max(ans,l-a[i]);
    else ans = max(ans,a[i]);
  }
  cout << ans;
}