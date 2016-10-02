#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,c;
    int s_r[51];
    cin>>n;
    while(n--){
            c=k=0;
        cin>> m;
        for(i=0;i<m;i++)cin>>s_r[i];
        i=0;
        while(i!=1){
                k=0,i=1;
			for (j = 0; j < m - 1; j++) {
				if (s_r[j] > s_r[j+1]) {
					++c;
					k = s_r[j];
					s_r[j] = s_r[j+1];
					s_r[j+1] = k;
					i = 0;
				}
			}
           }

        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
