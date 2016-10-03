#include<bits/stdc++.h>
using namespace std;
int n;
int ad[1005],bd[1001];
int check(int a){
    int h = 0,l=0;
        for(int i=a;i>=0;i--){
            if(ad[i]<ad[i-1]){
                h++;
                swap(ad[i-1],ad[i]);
            }
        }
    return h;
}
int main()
{
    int i,j,k,l,m;
    while(scanf("%d",&n)!=EOF){
        l=0;
        for(i=0;i<n;i++){
                cin>>ad[i];
            if(i!=0)
              if(ad[i]<ad[i-1])swap(ad[i-1],ad[i]),l++;
        }

          for(i=1;i<n;i++){
            l += check(i);
          }
       printf("Minimum exchange operations : %d\n",l);
    }
    return 0;
}
