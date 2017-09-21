#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
	int n, small;
	string in;
	int res[12];

	while (cin >> n and n != 0) {

		getchar();
		small = 26;

		for (int i = 0; i < n; i++) {
			getline(cin,in);
			int sp = 0;
			for (int j = 0; j < 25; j++) {
				if (in[j] == ' ')
					sp++;
			}

			res[i] = sp;
			if (sp < small)
				small = sp;
		}

		 int ans = 0;

		for (int i = 0; i < n; i++)
			ans += res[i] - small;

		cout << ans << endl;
	}

	return 0;
}
