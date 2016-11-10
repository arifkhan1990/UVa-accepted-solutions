#include<bits/stdc++.h>
using namespace std;
string s[105];

int main()
{
 int n=0,k=0;
    while (getline(cin, s[n]))
    {
        if (s[n].size() > k)
            k = s[n].size();
        ++n;
    }

    for (int j = 0; j < k; ++j)
    {
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i].size() > j)
                cout << s[i][j];
            else
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
