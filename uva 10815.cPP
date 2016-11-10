#include<bits/stdc++.h>
using namespace std;
char s1[100006];
int main()
{
    freopen("10815.txt","r",stdin);
    int i,n;

    set<string>stl;

    while(gets(s1)){
       string s2 = "";
       for(i=0;s1[i];i++){
        if(isalpha(s1[i])) s2 += tolower(s1[i]);
        else s2 += " ";
       }
       stringstream s3(s2);
       string token;

       while(s3>>token){
        stl.insert(token);
       }
    }
       for(set<string>::iterator it = stl.begin();it!=stl.end();it++)
       cout<<*(it)<<endl;

    return 0;
}
