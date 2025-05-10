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

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
char to[] = {'^','<','v','>'};
int main() {
    ll h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,0,h) cin >> s[i];
    
    // 全てのEから各i,jへの最短距離 と記号を求めればよさそう.
    vector<vector<ll>> dist(h, vector<ll>(w, INF));
    auto mov = s;
    queue<pair<int, int>> que;

    
    rep (i,0,h) {
        rep (j,0,w) {
            if (s[i][j] == 'E') {
                que.push({i,j});
                dist[i][j] = 0;
            }
        }
    }
    while (!que.empty()) {
        auto [i,j] = que.front();
        que.pop();
        for (int d = 0; d < 4; d++) {
            int ni = i + dx[d], nj = j + dy[d];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] == '#') {
                continue;
            }
            if (dist[ni][nj] <= dist[i][j] + 1) {
                continue;
            }
            dist[ni][nj] = dist[i][j] + 1;
            mov[ni][nj] = to[d];
            que.push({ni,nj});
        }
    }
    

    rep (i,0,h) {
        rep (j,0,w) {
            cout << mov[i][j];
        }
        cout << endl;
    }
}
