#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    string h;
    while(cin >> h and h != "*"){

        cout << "Case " << ++i << ": " ;
        cout << ((h == "Hajj")? "Hajj-e-Akbar" : "Hajj-e-Asghar") << endl;
    }

    return 0;
}
