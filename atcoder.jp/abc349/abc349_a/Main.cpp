#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
const ll INF = 0x1ffffffffffffff;



int main() {
    int N; cin >> N;
    vector<int> A(N-1);
    rep(i, 0, N-1) cin >> A[i];
    int ans = 0;
    rep(i, 0, N-1) {
        ans -= A[i];
    }
    cout << ans << endl;
}