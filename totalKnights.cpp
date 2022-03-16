
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		ll total_combinations = ((i * i) * ((i * i) - 1)) / 2; // NC2
		ll wrong_combinations = 4 * (i - 1) * (i - 2); 	// 2*(n-1)*(n-2)*2
		cout << total_combinations - wrong_combinations << nl;
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
