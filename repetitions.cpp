
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	string s;
	cin >> s;
	int l = s.length();
	int curr = 1, maxReps = 1;
	for (int i = 1; i < l; i++) {
		if (s[i] == s[i - 1]) {
			curr++;
		} else {
			maxReps = max(curr, maxReps);
			curr = 1;
		}
	}
	maxReps = max(curr, maxReps);
	cout << maxReps;
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
