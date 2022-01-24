#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			cnt += x % 2;
		}
		if (cnt == 0 || cnt == n) cout << "YES\n";
		else cout << "NO\n";
	}
}
