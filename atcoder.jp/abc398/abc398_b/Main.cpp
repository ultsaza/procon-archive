#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using pl = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")
using mint=modint998244353;

int main() {
	vector<int> a(13, 0);
	rep(i,0,7) {
		int x;
		cin >> x;
		x--;
		a[x]++;
	}
	int over3 =0, over2=0;
	rep(i,0,13) {
		if (a[i] >= 3) {
			over3++;
		}
		if (a[i] == 2) {
			over2++;
		}

	}
	if (over3 >= 2 || (over3 >= 1 && over2 >= 1)) {
		cout << "Yes" << endl;
		return 0;
	} else {
		cout << "No" << endl;
		return 0;
	}
}