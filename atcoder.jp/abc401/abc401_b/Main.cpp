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


int main() {
    ll n;
    cin >> n;
    vector<int> s(n);
    rep(i, 0, n) {
        string t;
        cin >> t;
        if (t == "login") {
            s[i] = 1;
        } else if (t == "logout") {
            s[i] = 2;
        } else if (t == "public") {
            s[i] = 3;
        } else if (t == "private") {
            s[i] = 4;
        }
    }
    ll ans = 0;
    bool is_login = false;
    rep (i, 0, n) {
        if (s[i] == 1) {
            is_login = true;
        } else if (s[i] == 2) {
            is_login = false;
        } else if (s[i] == 4) {
            if (!is_login) ans++;
        }
    }

    cout << ans << endl;
    
}