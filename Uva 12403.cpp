#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,money;
    string s,s1;
    cin >> n;
    while(n--){
        cin >> s ;
        if(s == "report")
            cout << sum << endl;
        else{
            cin >> money;
            sum += money;
        }
    }
    return 0;
}
