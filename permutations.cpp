
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	if (n < 4 && n != 1) {
		cout << "NO SOLUTION";
		return;
	}
	for (int i = 2; i <= n; i += 2)
		cout << i << " ";
	for (int i = 1; i <= n; i += 2)
		cout << i << " ";
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
