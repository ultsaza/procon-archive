#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main() {
    int x; int ans=1;
    cin >> x;
    for(int i=2;i<32;i++) {
        for(int p=2;pow(i,p)<=x;p++) {
            ans = max(ans,(int)pow(i,p));
        }
    }
    cout << ans;
}