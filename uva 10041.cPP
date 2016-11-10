#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,i,j,ad[501],k;
    vector<int>v;
    cin>>n;
    while(n--){
        cin>>m;
        for(i=0;i<m;i++){
            cin>>k;
            v.push_back(k);
        }
        unsigned long t_v = 5000*30000;
            for ( i = 0; i < m; i++) {
		unsigned long c = 0;
			for ( j = 0; j < m; j++) {
				c += abs (v[i] - v[j]);
			}
			t_v = min(t_v,c);
		}

		cout << t_v << endl;
		v.clear();
    }
    return 0;
}
