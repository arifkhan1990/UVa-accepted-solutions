#include<bits/stdc++.h>
using namespace std;

#define Mx 1050
int main()
{
    vector<bool>prime(Mx,false);
    prime[1] = prime[2] = true;

    for (int i = 3; i<Mx; i+=2)
    {
        bool p=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                p=false;
                break;
            }
        }
        if(p) prime[i] = true;
    }

    string s;
    while(cin >> s){
          int primeNum = 0;
       for(int i = 0, sz = s.size() ; i < sz ; i++ ){
            primeNum += ((s[i] >= 'a' and s[i] <= 'z') ? s[i]+1 - 'a' : s[i]+1 - 'A' + 26);
       }
       cout << ( (prime[primeNum])? "It is a prime word." : "It is not a prime word.") << endl;
    }
    return 0;
}
