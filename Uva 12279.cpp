#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0,n,p,actuall_treat;
    while(cin >> n and n){
            actuall_treat = 0;
    while(n--){
        cin >> p;
        if(p > 0)
            actuall_treat++;
        else
            actuall_treat--;
    }
        cout << "Case " << ++i << ": " << actuall_treat << endl;
    }
    return 0;
}

