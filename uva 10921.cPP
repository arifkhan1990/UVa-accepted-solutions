#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[26]= {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int n,i,j;
    string s;
    while(cin>>s){
        for(i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
                cout<<num[s[i]-'A'];
            else if(s[i]>='0' && s[i]<='9')
                 cout<<s[i]-'0';
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
