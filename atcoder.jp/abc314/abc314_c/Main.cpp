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
const ll LINF = 0x1fffffffffffffff;
#define all(i) begin(i), end(i)

int main(void) {
    int N,M; string S; cin >> N >> M >> S;
    vector<int> C(N); rep(i,N) cin >> C[i];//S[i]の色
    vector<vector<char>> P(M); //P[i]は色iの文字を集めた配列
    rep(i,N) P[C[i]-1].push_back(S[i]);
    vector<int> dom(M,0); //dom[i]はアクセス位置　なお、dom[0]には配列の最後を対応させる
    string ans="";
    rep(i,N) {
        if(dom[C[i]-1]==0) {
            ans += P[C[i]-1][P[C[i]-1].size()-1];
        } else {
            ans += P[C[i]-1][dom[C[i]-1]-1];
        }
        dom[C[i]-1]++;
    }
    cout << ans <<'\n';

}