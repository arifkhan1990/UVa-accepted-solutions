#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,l,j;
    size_t p;
    string s,s1,s2;
    char a1[1001],a2[1001];
    while(getline(cin,s)){
     s = s+" #";
     while(1){
        p = s.find(' ');
        s1 = s.substr(0,p);
        s = s.substr(p+1);
        reverse(s1.begin(),s1.end());

        if(s=="#"){
        cout<<s1; break;
        }else cout<<s1<<" ";
     }
     cout<<endl;
     s1.clear();
    }
    return 0;
}
