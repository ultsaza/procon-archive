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
using mint = modint998244353;
int main() {
    int dig=1;
    mint s=1;
    queue<int> q;
    q.push(1);
    int Q;cin >> Q;
    while(Q--) {
        int t; cin >> t;
        if(t==1) {
            int x; cin >>x;
            s = 10*s + x;
            dig++;
            q.push(x);
        }
        if(t==2) {
            int to=q.front();
            s = s - (pow_mod(10,dig-1,998244353))*(to);
            q.pop();
            dig--;
        }
        if(t==3) {
            cout << s.val() << '\n';
        }
    }
}
