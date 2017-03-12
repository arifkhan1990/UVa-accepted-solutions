#include<bits/stdc++.h>
using namespace std;

struct record {
	string name;
	double value;
	int match;
	record() : name(""), value(0.0), match(-1) {}
};

int main() {
	int l, k, m ,j = 0;
	double p;
	string n1, n2;

	while (cin >> k >> l and (k+l)!= 0) {

		record res;

		getline(cin, n1);
		while (k--)
			getline(cin, n1);

		while (l--) {
			getline(cin, n2);
			cin >> p >> m;
			getline(cin, n1);
			for (int i = 0; i < m; i++)
				getline(cin, n1);

			if (m > res.match or ((m == res.match) and (p < res.value))) {
				res.name = n2;
				res.value = p;
				res.match = m;
			}
          }
        if (j != 0)
        cout << endl;
		cout << "RFP #" << ++j << endl << res.name << endl;
	}

	return 0;
}
