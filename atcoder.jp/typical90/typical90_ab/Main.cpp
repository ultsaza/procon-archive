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
#define INF 4*10e18
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using mint=modint1000000007;

int main() {
    ll n;
    cin >> n;
    vvl g(1003, vl (1003, 0));
    rep(i,0,n) {
        ll lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        g[lx][ly]++;
        g[lx][ry]--;
        g[rx][ly]--;
        g[rx][ry]+=1;
    }
    rep(y,0,1002)
    rep(x,0,1002) {
        g[x+1][y]+=g[x][y];
    }

    rep(x,0,1002)
    rep(y,0,1002) {
        g[x][y+1]+=g[x][y];
    } 

    vl a(n+1,0);
    rep(x,0,1002)
    rep(y,0,1002) {
        a[g[x][y]]++;
    } 
    
    rep(i,1,n+1) {
        cout << a[i] << endl;
    }
}