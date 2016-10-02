#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i=0,j;int ck=0;
    char ch;
    while(getline(cin,s)){
            i=0;
    while(s[i]!='\0'){
        if(s[i]=='"' && ck == 0)cout<<"``",ck=1;
        else if(s[i]=='"' && ck == 1)cout<<"''",ck=0;
        else cout<<s[i];
      i++;
    }
    cout<<endl;
}
    return 0 ;
}
