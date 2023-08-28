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
const int INF = 0x3fffffff;
const ll LINF = 0x1fffffffffffffff;


//dfsをするんだけどvis[i]を走査後に0にしないといけない
int N,M;
int G[11][11];
bool vis[11];
int ans;//ここで宣言されたものは初期値0として扱われるみたい

void dfs(int v,int sum) {
    vis[v] = 1;
    ans = max(sum,ans);
    rep(i,1,N+1) {
        if(!vis[i]  && G[v][i]!=0) {
            dfs(i,sum+G[v][i]);
        }
    }
    vis[v] = 0; //reset
}

int main() {
    //cout << "ans:" << ans << endl;
    cin >> N >> M;
    rep(i,M) {
        int a,b,c; cin >> a >> b >> c;
        G[a][b] =c;
        G[b][a] =c;
    }
    rep(i,1,N+1) {dfs(i,0); /*cout << "ans:" << ans << endl;*/}
    cout << ans;
}