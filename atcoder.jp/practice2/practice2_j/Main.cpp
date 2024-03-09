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


int op(int a, int b) {return max(a,b);}
int e() {return -1;}

int target;
bool f(int v) {return v < target;}

int main() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    rep(n) cin >> a[i];

    segtree<int, op ,e> seg(a);

    rep(i,q) {
        int t;
        cin >> t;
        if(t==1) {
            int x,v;
            cin >> x >> v;
            seg.set(x-1,v);
        } else if(t==2) {
            int l,r;
            cin >> l >> r;
            cout << seg.prod(l-1,r) << endl;
        } else if(t==3) {
            int p;
            cin >> p >> target;
            cout << seg.max_right<f>(p-1)+1 << endl;
        }
    }
}