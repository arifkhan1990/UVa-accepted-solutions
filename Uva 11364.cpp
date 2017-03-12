#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int ma = 0, mi = 100;
        int t,p;
        cin >> t;
        while(t--){
            cin >> p;
            ma = max(ma,p);
            mi = min(mi,p);
        }
        cout << (ma * 2) - (mi * 2) << endl;
    }
    return 0;
}
