#include <bits/stdc++.h>
using namespace std;

int main (void) {
	int n,c=0;
	while (cin >> n && n) {
            int sum=0;
		int ad[n];
		for(int i=0;i<n;i++)cin>>ad[i],sum += ad[i];
		int avg = sum/n;sum=0;
		for(int i = 0;i<n;i++)if(ad[i]>avg)sum += ad[i]-avg;
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",++c,sum);
	}
	return 0;
}

