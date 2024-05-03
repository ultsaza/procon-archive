#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
const ll INF = 0x1ffffffffffffff;


int main() {
    int N,K;
    cin >> N >> K;
    vector<int> h(N);
    rep(i,0,N) cin >> h[i];
    vector<ll> dp(N,INF);
    dp[0] = 0;
    rep(i,0,N) {
        for(ll j=i+1;j<=i+K;j++) {
            if(j >= N) continue;;
            dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
        }
    }
    cout << dp[N-1] << endl;
    return 0;
}