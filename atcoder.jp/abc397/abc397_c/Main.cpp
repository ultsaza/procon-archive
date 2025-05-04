#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pl = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using ld = long double;
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")
using mint=modint998244353;

int main() {
    ll n;
    cin >> n;
    vl a(n);
    rep(i,0,n) cin >> a[i];
    vl u(n+1,0),d(n+1,0);
    set<ll> s;
    rep(i,0,n) {
        if (!s.count(a[i])) {
            u[i+1] = u[i] + 1;
        }
        else {
            u[i+1] = u[i];
        }
        s.insert(a[i]);
    }
    s.clear();
    rep(i,0,n) {
        if (!s.count(a[n-i-1])) {
            d[n-i-1] = d[n-i] + 1;
        }
        else {
            d[n-i-1] = d[n-i];
        }
        s.insert(a[n-i-1]);
    }
    ll ans = 0;
    rep(i,0,n+1) {
        ans = max(ans,u[i] + d[i]);
    }
    cout << ans << endl;
    

}