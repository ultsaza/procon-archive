#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll=long long;
#define all(v) v.begin(), v.end()
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for(ll i = 0; i < (n); ++i)
#define rep2(i, n) for(ll i = 0; i < (n); ++i)
#define rep3(i, a, b) for(ll i = (a); i < (b); ++i)
#define rep4(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
const ll LINF = 0x1fffffffffffffff;

int main() {
    int n,d; cin >> n >> d;
    vector<bool> B(d,1);
    rep(i,n){
        string s; cin >> s;
        rep(j,d) {
            if(s[j]=='x') B[j]=0;
        }
    }
    int ans=0,sub=0;
    rep(i,d) {
        if(B[i]) sub++;
        else sub=0;
        ans=max(ans,sub);
    }
    cout << ans;
}