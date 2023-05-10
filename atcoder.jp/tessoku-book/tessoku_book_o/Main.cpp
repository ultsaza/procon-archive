#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n,a[100009],b[100009];
  cin >> n;
  for(int i=1;i<=n;i++) {
    cin >> a[i];
  }
  vector<int> T;
  for(int i=1;i<=n;i++) {
    T.push_back(a[i]);
  }
  sort(T.begin(),T.end());
  T.erase(unique(T.begin(),T.end()),T.end());// この時点で配列済み
  for(int i=1;i<=n;i++) {
    b[i]=lower_bound(T.begin(),T.end(),a[i])-T.begin();//T[i]==a[j] のi,jは存在
    b[i]++;
  }
  for(int i=1;i<=n;i++) {
    if(i>=2) {
      cout << " ";
    }
      cout << b[i];
  }
    cout << endl;
}
  