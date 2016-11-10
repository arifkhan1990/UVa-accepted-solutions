#include<bits/stdc++.h>
using namespace std;
#define N 256
int main()
{
    int n,i,j,k,m_l;
    string s,s1;
    int ans[N];
    while(getline(cin,s)){
            m_l=0;
            memset(ans,0,sizeof(ans));
        for(i=0;i<s.size();i++)
            if(isalpha(s[i]))
              ans[s[i]]++;
        for(i=0;i<N;i++)
        m_l=max(m_l,ans[i]);
        for(i=0;i<N;i++)
            if(ans[i]==m_l)
            putchar(i);
        cout<<" "<<m_l<<endl;
    }
    return 0;
}
