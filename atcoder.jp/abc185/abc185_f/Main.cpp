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
#define INF 1e18 // ! lower than 2^60
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")
using mint=modint998244353;

ll op(ll a, ll b) {
    return a^ b;
}
ll e() {
    return 0;
}

int main() {
    ll n, q; cin >> n >> q;
    segtree<ll, op, e> seg(n);
    rep(i, 0, n) {
        ll a; cin >> a;
        seg.set(i, a);
    }
    rep(i, 0, q) {
        ll t, x, y; cin >> t >> x >> y;
        x--; y--;
        if (t == 1) {
            seg.set(x, seg.get(x) ^ (y+1));
        } else {
            cout << seg.prod(x, y+1) << endl;
        }

    }
        
}