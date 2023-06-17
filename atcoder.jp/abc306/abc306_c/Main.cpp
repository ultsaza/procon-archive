#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll=long long;
#define rep(i, n) for (int i = 1; i <=(int)(n); i++)
#define rep2(i, s, n) for (int i= (s); i <= (int)(n); i++)
const ll M=1000000007;


int main() {
    int n;
    cin>>n;
    vector<int> a(3*n+1);
    rep(i,3*n) cin >> a[i];
    vector<int> cnt(n+1,0);
    vector<int> ans;
    rep(i,3*n) {
        cnt[a[i]]++;
        if(cnt[a[i]]==2) ans.push_back(a[i]);
    }
    rep2(i,0,n-1) cout << ans[i] << " ";
}