#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i= (s); i < (int)(n); i++)
const ll M=1000000007;

bool palindrome(const string& s){
    return equal(s.begin(), s.end(), s.rbegin());
}
int main(){
    string s;
    cin >> s;
    stack<int> lef;
    rep(i,s.size()) {
        if(s[i]=='(') lef.push(i+1);
        if(s[i]==')' && !lef.empty()) {
            cout << lef.top() << " " << i+1 << '\n';
            lef.pop();
        }
    }
}