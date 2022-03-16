
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	ll n, moves = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ll maxt = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < maxt)
			moves += maxt - arr[i];
		else
			maxt = arr[i];
	}
	cout << moves;
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
