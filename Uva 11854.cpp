#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    while(cin >> a[0] >> a[1] >> a[2] and (a[0]+a[1]+a[2]) != 0){
            sort(a,a+3);
        if((a[0]*a[0] + a[1]*a[1]) == a[2]*a[2]) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}
