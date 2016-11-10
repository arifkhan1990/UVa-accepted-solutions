#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,m;
    string s,s2;
    map<string,int>res;
    cin>>n;
    while(n--){
        cin>>s;
        getline(cin,s2);
        res[s]++;
    }
    map<string,int>::iterator it;
    for(it=res.begin();it!=res.end();it++){
        cout<<(*it).first<<" "<<(*it).second;
        cout<<endl;
    }
    return 0;
}
