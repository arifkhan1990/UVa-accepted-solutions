#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ad[30001],k,k1,bd[30001];
     while(cin>>n){
      if (n == 0) {
			cout << "Not jolly" << endl;
			continue;
		}
            int p=0;
        for(i=0;i<n;i++){
            cin>>ad[i];
            if(i>0)
            bd[i-1]=abs(ad[i]-ad[i-1]);
        }

     sort(bd,bd+(n-1));
     for(j=0;j<n-1;j++){
        if(bd[j] == j+1)p++;
        else break;

     }
     if(p != n-1 )cout<<"Not jolly\n";
     else cout<<"Jolly\n";
     }
    return 0;
}

