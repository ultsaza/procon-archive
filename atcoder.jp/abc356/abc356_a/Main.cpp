#define _GLIBCXX_DEBUG

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
const ll INF = 0x1ffffffffffffff;


int main() {
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i,0,n) a[i] = i+1;
    rep(i,0,n) cin >> a[i];
    
    rep(i,0,n) {
        if(i>=l-1 && i<=r-1) {
            cout << a[r+l-2-i] << " ";
        } else {
            cout << a[i] << " ";
        }
    }
}