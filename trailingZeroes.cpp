
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
const unsigned int M = 1000000007;
/*---Check README for explanation---*/
void solve() {
	int n;
	cin >> n;
	int trailing_zeroes = 0;
	int a = 5;
	do {
		trailing_zeroes += floor(n / a);
		a *= 5;
	} while (a < n);
	cout << trailing_zeroes << nl;
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
