/*
                                                  CODEMAN
                                              ARIF KHAN NIHAR
                                         uva 10929 - You can say 11

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    string s,s1;
    while(cin>>s and s != "0"){
        int sum = 0;
        for(int i = 0; i<s.size() ; i+=2)
            sum += s[i]-48;

        for(int i = 1; i<s.size() ; i+=2)
            sum -= s[i]-48;
        if(sum%11 == 0)
            cout << s << " is a multiple of 11.\n";
        else
            cout << s << " is not a multiple of 11.\n";

              }
    return 0;
}
