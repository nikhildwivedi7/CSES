
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	int t;
	cin >> t;
	while (t--) {
		ll y, x, ans = 1L;
		cin >> y >> x;
		ll z = max(y, x);
		ll z2 = z * z;
		if (y == z) {
			if (y % 2 == 0)
				ans = z2 - x + 1;
			else
				ans = z2 + 1 - 2 * z + x;
		} else {
			if (x % 2 != 0)
				ans = z2 - y + 1;
			else
				ans = z2 + 1 - 2 * z + y;
		}
		cout << ans << nl;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	// for etting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}
