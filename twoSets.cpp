
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	if (n < 3)
		cout << "NO" << nl;
	/*---- Only two cases when it is divisible when n is divisible by 4 or if it is part of the series 3, 4, 7, 11, ..----*/
	else {
		if (n % 4 == 3) {
			cout << "YES" << nl;
			vector<int> v1;
			vector<int> v2;
			v1.push_back(1);
			v1.push_back(2);
			v2.push_back(3);
			int a = 3;
			while (a < n) {
				v1.push_back(a + 1);
				v1.push_back(a + 4);
				v2.push_back(a + 2);
				v2.push_back(a + 3);
				a += 4;
			}
			cout << v1.size() << nl;
			for (auto x : v1)
				cout << x << " ";
			cout << nl << v2.size() << nl;
			for (auto x : v2)
				cout << x << " ";
		} else if (n % 4 == 0) {
			cout << "YES" << nl;
			vector<int> v1;
			vector<int> v2;
			int a = 0;
			while (a < n) {
				v1.push_back(a + 1);
				v1.push_back(a + 4);
				v2.push_back(a + 2);
				v2.push_back(a + 3);
				a += 4;
			}
			cout << v1.size() << nl;
			for (auto x : v1)
				cout << x << " ";
			cout << nl << v2.size() << nl;
			for (auto x : v2)
				cout << x << " ";
		}
		else
			cout << "NO" << nl;
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
