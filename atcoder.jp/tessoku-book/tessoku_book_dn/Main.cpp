#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i= (s); i < (int)(n); i++)
const ll M=1000000007;


int main() {
   int x,y;
   cin >> x >> y;
   vector<pair<int,int>> v;
   int k=0;
   while(x*y!=1) {
    v.push_back(make_pair(x,y));
    if(y>x) y -= x;
    else x -= y;
    k++;
   }
   reverse(v.begin(),v.end());
   cout << k << '\n';
   rep(i,v.size()) cout << v[i].first << " " << v[i].second << '\n';
}