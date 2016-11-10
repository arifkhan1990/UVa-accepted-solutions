#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m=0,i,j,k;
    string s,s1,s2;

    while(cin>>s >>s1){
            k=m=0;
        for(j=0;j<s.size();j++){
                k=0;
            for(i=m;i<s1.size();i++){
                if(s[j]==s1[i]){
                        k = 1;
                        m=i+1;
                        break;
                }
            }
            if(!k)break;
        }
        if(k)cout<<"Yes\n";
        else cout<<"No\n";
         }
    return 0;
}
