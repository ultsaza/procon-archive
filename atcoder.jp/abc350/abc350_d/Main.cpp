#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
const ll INF = 0x1ffffffffffffff;
// 連結成分の中にあるノード同士は必ず問題文の操作によって連結するっぽい
// Nこの頂点がある時張れる最大の変の数は　N(N-1)/2
int N,M;
vector<vector<int>> G;
vector<bool> visited;


vector<int> connected_component(int v) {
    vector<int> res;
    queue<int> q;
    q.push(v);
    visited[v] = true;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        res.push_back(v);
        for (int nv : G[v]) {
            if (visited[nv]) continue;
            visited[nv] = true;
            q.push(nv);
        }
    }
    return res;
}


int main() {
    ll ans =0;
    cin >> N  >>M;
    
    G.resize(N);
    visited.resize(N);
    rep(i,0,N) visited[i] = false;
    rep(i,0,M){
        int a,b;
        cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    // それぞれの連結成分から、その連結成分に含まれる辺の数を求める
    // その後、それぞれの連結成分に含まれる辺の数の総和を求める
    rep(i,0,N) {
        ll edges = 0;
        if (visited[i]) continue;
        vector<int> component = connected_component(i);
        for (int v : component) {
            edges += G[v].size();
        }
        edges /= 2;
        ll n = component.size();
        ans += (n*(n-1))/2 - edges;
    }
    
    cout << ans << endl;
}