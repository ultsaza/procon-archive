#include<bits/stdc++.h>
using namespace std;

int main() {
  int N; 
  cin >> N;
  vector<int> x(N);
  for(int i=0;i<N;i++) {
    cin >> x[i];
  }
  vector<int> sumset(99);
  for(int p=0;p<=99;p++) {
    int sum=0;
    for(int k=0;k<N;k++) {
      sum += (x[k]-(p+1))*(x[k]-(p+1));
    }
    sumset[p]=sum;
  }
  sort(sumset.begin(),sumset.end());
  cout << sumset[0] << endl;
}