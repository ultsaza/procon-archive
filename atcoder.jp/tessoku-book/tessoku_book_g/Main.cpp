#include<iostream>
using namespace std;

int main() {
  int d,n;
  cin >> d >>n;
  int b[100009];
  int l[100009];
  int r[100009];
  for(int i=0;i<n;i++) {
    cin >> l[i] >> r[i];
  }
  for(int i=0;i<n;i++) {
    b[l[i]] ++;
    b[r[i]+1] --;
  }
  int s[100009];
  s[0]=0;
  for(int i=0;i<d;i++) {
    s[i+1]=s[i]+b[i+1];
  }
  for(int i=0;i<d;i++) {
    cout << s[i+1]<< endl;
  }
}