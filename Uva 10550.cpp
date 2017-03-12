#include<bits/stdc++.h>
using namespace std;

int result(int dgree, int ans,int a,int b){
    if(a > b){
        ans += (b + 40 - a) * dgree;
    }else{
        ans += (b - a) * dgree;
    }
    return ans;
}
int main()
{
    int n,initial_pos,x,y,z,dgree = 9;

    while(cin >> initial_pos >> x >> y >> z and (initial_pos + x + y + z) != 0){
        int ans  = 1080;
        ans = result(dgree,ans,x,initial_pos);
        if(y < x)
            ans += (40 - x + y) * dgree;
        else
            ans += (y - x) * dgree;

       ans = result(dgree,ans,z,y);
       cout << ans << endl;
    }
    return 0;
}
