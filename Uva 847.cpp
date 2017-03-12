#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int i = 0;
    double n;
    while(cin >> n){
            i = 0;
           while(n > 1){
                i++;
            if( (i%2) == 1) n/=9;
            else n/=2;
           }
        cout << (((i%2) == 0)? "Ollie " : "Stan ") << "wins." << endl;
    }
    return 0;
}
