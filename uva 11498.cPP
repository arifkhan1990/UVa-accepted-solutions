#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, m, x, y;

	while (cin >> k && k) {

		cin >> n >> m;

		while (k--) {
			cin >> x >> y;

			if (x == n || y == m) cout << "divisa" << endl;
			else if (x < n && y < m) cout << "SO" << endl;
            else if (x < n && y > m) cout << "NO" << endl;
			else if (x > n && y < m) cout << "SE" << endl;
			else if (x > n && y > m) cout << "NE" << endl;
			}
		}
	return 0;
}
