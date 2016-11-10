#include<bits/stdc++.h>
using namespace std;
#define power(n,i)  (pow(2,n-i)-1)
int main()
{
    int ans,i;
    string s;
    while(cin>>s && s!="0"){
        ans=0;
        for(i=0;i<s.size();i++)
            ans += ((int)s[i]-48) * power(s.size(),i);

        cout<<ans<<endl;
    }
    return 0;
}
