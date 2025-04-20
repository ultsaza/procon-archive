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
using mint=modint998244353;
#define INF 1000000009
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")

int main() {
    ll n,x;
    cin >> n >> x;
    ll T = 1 << n;
    vector<tuple<ll,ll,double>> ps;
    rep(i,0,n) {
        int s,c,p;
        cin >> s >> c >> p;
        ps.push_back(make_tuple(s,c,p/100.0));
    }
    vector dp(x+1, vector<double> (T));

    rep(i,0,x+1) {
        rep(s, 0, T) {
            rep(j,0,n) {
                if (s>>j&1) continue;
                auto [score, cost, prob] = ps[j];
                if (cost > i) continue;
                double now = dp[i-cost][s]*(1-prob) + (dp[i-cost][s|1<<j]+score)*prob;
                dp[i][s] = max(dp[i][s], now);
            }
        }
    }
    cout << fixed << setprecision(15) << dp[x][0] << endl;

}