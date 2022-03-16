
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
const unsigned int M = 1000000007;
/*---just 2 raised to power n is the answer but we have to do it modulo M and one by one, not pow(2,n) % M ---*/
void solve() {
	int n, s = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = ((s % M) * 2) % M;
	}
	cout << s;
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
