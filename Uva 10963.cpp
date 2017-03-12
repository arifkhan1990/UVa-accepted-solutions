#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,w,r,c;
    cin >> n;
    while(n--){
            int dist , r_s = 1,l_s = 1;
            cin >> w;

    while(w--){
        cin >> r >> c;
         if(r_s)
            dist = r - c , r_s = 0;
         else
            if(r - c != dist )
             l_s = 0;
      }
      cout << ((l_s)? "yes" : "no") << endl;
      if(n) cout << endl;
    }
    return 0;
}
