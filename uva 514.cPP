#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int b[1005];
int c[1005];

int main()
{
	int n,i,j,k;
	 while (cin>> n and n) {
        while (cin >> arr[0] and arr[0]) {
            for (i = 1; i < n; i++) {
                cin >> arr[i];
}

               stack<int>khan;
             int  debu = 0;

               for(i = 1;i<=n;i++){
             	khan.push(i);

               	while(khan.size()>0 && arr[debu] == khan.top()){
               		debu++;
               		khan.pop();
               	}
               }

		   		if(n==0){
		     break;
		}
		cout << (khan.size()==0 ? "Yes" : "No") << endl;
	}
cout << endl;
	}
	return 0;
	}
