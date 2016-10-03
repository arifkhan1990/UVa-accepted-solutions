#include<bits/stdc++.h>
using namespace std;
int sum(int j){
    int t=0;
    while(j!=0){
        t+=j%10;
        j/=10;
    }
    return t;
}
int main()
{
    unsigned long n;
    string s,s1;
    int i,j,k,l,l1,l2;

    while(cin>>s && s!="0")
    {
        l1=l2=0;
        for(i=0;i<s.size();i++){
            l1 += s[i]-48;
        }
        while(l1>9){
            l1 = sum(l1);
        }
        cout<<l1<<endl;
    }
    return 0;
}
