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

int main(void) {
    int n,a,b; cin >> n >> a >> b;
    string s; cin >> s;
    int passed=0;
    int abr=1;
    rep(i,n) {
        if(s[i]=='a') {if(passed!=a+b) {
            cout << "Yes"<<'\n';
            passed++;
        }else cout << "No"<<'\n';}
        if(s[i]=='b') {if(passed!=a+b && abr<=b) {
            cout << "Yes"<<'\n';
            passed++;
            abr++;
        }else cout << "No"<<'\n';}
        if(s[i]=='c') cout << "No"<<'\n';
    }
}