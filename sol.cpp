#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long int mxN = 1e5;
long int a[mxN], n, k, ans;

void test_case() {
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ans = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] < k) {
			ans += k - a[i] % k;
		}
		else {
			ans += min(a[i] % k, k - a[i] % k);
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
}
