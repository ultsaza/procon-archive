#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> d(n,0);
  //以下iを増やしていくことによるやつ
  int j=0; //dの位置
  for(int i=0;i<n;i++) {
    if(s[i]=='o') {
      d[j]++;
    }
    else {
      j++;
    }
  }
  sort(d.begin(),d.end()); //最大はd[n-1]
  //最大が0のときは全て'-' 最大がnのときは全て'o'
  if(d[n-1]==0 || d[n-1]==n) {
    cout << -1 << endl;
  }
  else {
    cout << d[n-1] << endl;
  }
}