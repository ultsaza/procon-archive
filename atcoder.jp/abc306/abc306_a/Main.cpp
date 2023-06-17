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
    int n;
    string s;
    cin >> n>>s;
    rep2(i,0,s.size()-1) {
        cout << s[i] << s[i];
    }
}