/*
                                                  CODEMAN
                                              ARIF KHAN NIHAR
                                           uva 151 - Power Crisis

*/
#include <bits/stdc++.h>
using namespace std;

int remaining(int n, int k) {
    int r = 0;
    for (int i = 1; i < n; i++)
        r = (r + k) % i;

    return r;
}

int main(){
    int n, y;
    while(cin >> n && n){
           y = 1;
           for(;;){
                   if( remaining(n,y) == 11) break;
                   else y++ ;
           }
           printf("%d\n",y);
    }
    return 0;
}
