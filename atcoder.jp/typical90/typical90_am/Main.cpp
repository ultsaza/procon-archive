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
using mint=modint1000000007;
const ll INF = 1e18;

int main() {
    ll n;
    cin >> n;
    vvi G(n);
    rep(i,0,n-1) {
        ll a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vl dp(n);
    auto dfs = [&](auto dfs, ll v, ll p) -> int {
        ll res = 1;
        for (auto u: G[v]) {
            if (u == p) continue;
            res += dfs(dfs, u, v);
        }
        dp[v] = res;
        return res;
    };
    dfs(dfs, 0, -1);
    ll ans = 0;
    rep(i,0,n) {
        ans += dp[i] * (n - dp[i]);
    }
    cout << ans << endl;
}