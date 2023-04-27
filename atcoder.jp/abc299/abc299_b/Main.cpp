#include<bits/stdc++.h>
using namespace std;

int main() {
  int N,T;
  cin>>N>>T;
  vector<int> C(N);
  vector<int> R(N);
  bool eT=0;
  for(int i=0;i<N;i++) {
    cin >> C[i];
    if(C[i]==T) {
      eT=1;
    }
  }
  for(int i=0;i<N;i++) {
    cin >> R[i];
  }
  
  if(eT) {
    vector<int> hasT(N);
    for(int i=0;i<N;i++) {
      if(C[i]==T) {
        hasT[i]=R[i];
      }
    }
    sort(hasT.begin(),hasT.end());
    int k=0;
      while(1) {
        if(hasT[N-1]==R[k]) {
          cout << k+1<< endl;
          break;
        }
        k++;
      }
  }
  else {
    vector<int> has1(N);
    for(int i=0;i<N;i++) {
      if(C[i]==C[0]) {
        has1[i]=R[i];
      }
    }
    sort(has1.begin(),has1.end());
    int k=0;
    while(1) {
      if(has1[N-1]==R[k]) {
        cout << k+1<<endl;
        break;
      }
      k++;
    }
  }
}