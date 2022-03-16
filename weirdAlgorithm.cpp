#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve()
{
	ll n;
	cin >> n;
	cout << n << " ";
	if (n == 1) {
		return;
	}
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			cout << n << " ";
		}
		else {
			n = n * 3 + 1;
			cout << n << " ";
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	// for etting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}

