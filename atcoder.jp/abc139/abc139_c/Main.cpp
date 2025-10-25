#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, r) for (ll i = 0L; i < (r); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using pl = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using mint=modint998244353;\

int main() {
    ll n;
    cin >> n;
    vl a(n);
    rep(i,n) cin >> a[i];
    ll ans = 0;
    ll cur = 0;
    rep(i,n-1) {
        if (a[i] >= a[i+1]) {
            cur++;
            ans = max(cur, ans);
        } else {
            cur = 0;
        }

    }
    cout << ans;
}