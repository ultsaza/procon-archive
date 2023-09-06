#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll=long long;
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for(ll i = 0; i < (n); ++i)
#define rep2(i, n) for(ll i = 0; i < (n); ++i)
#define rep3(i, a, b) for(ll i = (a); i < (b); ++i)
#define rep4(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define all(i) begin(i), end(i)
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
const int INF = 0x3fffffff;
const ll LINF = 0x1fffffffffffffff;

int N,M;
vector<bool> visited;
bool flag=1;
int var,edge;
void dfs(const vector<vector<int>> &G,int v) {
    if(!visited[v]) {
        visited[v]=1;
    for(auto nv : G[v]) {
        edge++;//最後に2で割る
        if(visited[nv]) continue;
        dfs(G,nv);
    }
    var++;
    } 
}

int main() {
    cin >> N >> M;
    vector<vector<int>> G;
    G.resize(N);
    visited.assign(N,false);
    rep(i,M) {
        int u,v; cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    rep(i,N) {
        var=0;
        edge=0;
        dfs(G,i);
        edge /= 2;
        if(edge!=var) flag = 0;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}