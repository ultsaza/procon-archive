#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using pl = pair<ll,ll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define INF 1e18
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")
using mint=modint998244353;

int main() {
   ll n, l, r;
   cin >> n >> l >> r;
   string s;
   cin >> s;
   bool ok = false;
   rep(i, l-1, r) {
    if (s[i]!='o')
    ok = true;

   }
   if (ok) {
    cout << "No" << endl;
   } else {
    cout << "Yes" << endl;
   }
}