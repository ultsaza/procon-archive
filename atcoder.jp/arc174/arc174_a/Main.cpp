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


ll maxSubarraySumKadane(const std::vector<ll>& nums) {
    ll max_so_far = nums[0];
    ll max_ending_here = nums[0];
    
    for (ll i = 1; i < nums.size(); i++) {
        max_ending_here = std::max(nums[i], max_ending_here + nums[i]);
        max_so_far = std::max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

ll minSubarraySumKadane(const std::vector<ll>& nums) {
    ll min_so_far = nums[0];
    ll min_ending_here = nums[0];
    
    for (ll i = 1; i < nums.size(); i++) {
        min_ending_here = std::min(nums[i], min_ending_here + nums[i]);
        min_so_far = std::min(min_so_far, min_ending_here);
    }
    
    return min_so_far;
}

int main(){
    int N,C;
    cin >> N >> C;
    vector<ll> A(N);
    rep(N) cin >> A[i];

    ll sum=0;
    rep(i,N) sum += A[i];
    

   cout << max({sum, sum + (C-1)*maxSubarraySumKadane(A), sum + (C-1)*minSubarraySumKadane(A)}) << endl;
    return 0;
}


