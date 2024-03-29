#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for (ll i = 0; i < (n); ++i)
#define rep2(i, n) for (ll i = 0; i < (n); ++i)
#define rep3(i, a, b) for (ll i = (a); i < (b); ++i)
#define rep4(i, a, b, c) for (ll i = (a); i < (b); i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define all(i) begin(i), end(i)
const int INF = 0x3fffffff;
const ll LINF = 0x1ffffffffffffff;



int main() {
    int h,w;
    cin >> h >> w;
    vector<string> c(h);
    rep(h) cin >> c[i];

    pair<int,int> s,g;
    rep(i,h)rep(j,w) {
        if(c[i][j] == 's') s = {i,j};
        if(c[i][j] == 'g') g = {i,j};
    }

    vector<int> dx = {1,0,-1,0};
    vector<int> dy = {0,1,0,-1};

    vector seen(h, vector<bool>(w, false));

    stack<pair<int,int>> st;

    st.push(s);

    seen[s.first][s.second] = true;

    while(!st.empty()) {
        auto [x,y] = st.top();
        st.pop();

        rep(i,4) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(0 <= nx && nx < h && 0 <= ny && ny < w && c[nx][ny] != '#' && seen[nx][ny] == false) {
                seen[nx][ny] = true;
                st.push({nx,ny});
            }
        }
    }

    if(seen[g.first][g.second]) cout << "Yes" << endl;
    else cout << "No" << endl;
}