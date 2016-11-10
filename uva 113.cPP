#include <bits/stdc++.h>
using namespace std;

int main (void) {
	int n;
	double p;
	while (cin >> n >> p) {
		cout << fixed << setprecision(0) << exp(log(p)/n) << endl;
	}
	return 0;
}
