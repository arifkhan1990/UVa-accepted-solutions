#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,l;
    string s, s1;
    size_t p;
    //s = "";
    while(getline(cin,s)){
            k=0;
            l = s.size();
          s = s+" #";
        while(1){
            p = s.find(' ');
            s1 = s.substr(0,p);
            s = s.substr(p+1);
            if(s1[0]>='A' && s1[0]<='Z' || s1[0]>='a' && s1[0]<='z')k++;
            if(s=="#")
                    break;
        }
    cout<<k<<endl;
    }
    return 0;
}
