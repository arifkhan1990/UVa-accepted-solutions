#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ar[51];
    ar[1] = 1;
    ar[2] = 2;
    for(int i = 3; i<51; i++)
         ar[i] = ar[i-2] + ar[i-1];
    while(cin >> n and n){
        cout << ar[n] << endl;
    }
    return 0;
}
