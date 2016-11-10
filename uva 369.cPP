#include<bits/stdc++.h>
using namespace std;
int main () {
    double m,n,a,b,k;

    while(cin>>m>>n && m && n){
        k=1;
        a=m;
        b=m-n;

        if(b>n) b=n;

        while(b) {
            k *= a/b;
            a--;
            b--;
        }
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",m,n,k);

    }

    return 0;
}
