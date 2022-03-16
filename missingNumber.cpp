
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	int n, count = 1;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n - 1);
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == count)
			count++;
		else
			break;
	}
	cout << count;
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

