#include <bits/stdc++.h>
using namespace std;

int main() {
	 int n,m,y = 0, t = 1;
	char s1[10001];
	int ve[10] = {0},x = 1;
    cin >> n;
	while(n--){
		t = 1;
          cin >> m;
		while(t <= m){
			y = t ;
		   sprintf(s1 , "%d" ,y);
		   int jh = strlen(s1);
		   for( int b = 0; b < jh ; b++) ve[s1[b]-48]++;
			t++;
		}
		for(int i = 0; i < 10 ; i++){
			if(i < 9)
			cout << ve[i] << " ";
			else
			cout << ve[i];

			ve[i] = 0;
		}
		cout << endl;
	}
	return 0;
}
