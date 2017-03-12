#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w,l,n,i = 0;
    cin >> n;
    while(n--){
        cin >> h >> w >> l;
        cout << "Case " << ++i << ": " ;
        cout << ((h>20 or w>20 or l>20)? "bad" : "good") << endl;
    }

    return 0;
}
