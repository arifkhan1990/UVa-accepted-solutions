#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    while(scanf("%s",&s)&& s[0]!='#'){
    if(next_permutation(s,s+strlen(s)))cout<<s<<endl;
       else cout<<"No Successor\n";
    }
    return 0;
}
