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
const ll LINF = 0x1ffffffffffffff;


int main() {
    ll N,M;ll K;
    cin >> N >> M >> K;
    ll l = lcm(N,M);
    ll c = l/N + l/M -2;
    ll r = K%c;
    ll a=1,b=1;
    
    ll q = K/c;
    ll ad = 0;
    if(r!=0){
       
        rep(i,r){
        if(a*N < b*M){
            ad = a*N;
            a++;
        }
        else{
            ad = b*M;
            b++;
        }
    }
        cout << q*(l)+ ad << endl;
    }

    else {
        rep(i,c){
        if(a*N < b*M){
            ad = a*N;
            a++;
        }
        else{
            ad = b*M;
            b++;
        }
        
    }
        cout << (q-1)*(l) + ad << endl;
    }
    //cout << "q*l: " << q*l << " d[r]: " << d[r] << endl;
    //rep(c) cout << d[i] << " ";
    //cout << "c: " << c << endl;
   

}

