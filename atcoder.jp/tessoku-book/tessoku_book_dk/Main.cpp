#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll=long long;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define revrep2(i, s, n) for (int i= (s); i >= (int)(n); i--)
const ll M=1000000007;

int main() {
    int N;
    string S;
    cin >> N >> S;
    vector<int> Ha(N,1);
    vector<int> Hb(N,1);
    int stra=1,strb=1;
    rep2(i,0,N-2) {
        if(S[i]=='A') stra++;
        if(S[i]=='B') stra=1;
        Ha[i+1]=stra;
    }
    revrep2(i,N-2,0) {
        if(S[i]=='A') strb=1;
        if(S[i]=='B') strb++;
        Hb[i]=strb;
    }
    ll ans=0;
    rep2(i,0,N-1) {
        ans += max(Ha[i],Hb[i]);
    }
    cout << ans;
}