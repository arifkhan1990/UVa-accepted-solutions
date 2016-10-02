#include<bits/stdc++.h>
using namespace std;
#define res 500000000
int main()
{
    int p,budget,h,w,check,h_p,num_of_beds;
    while(cin >> p >> budget >> h >> w){
            check  =  res;

    for(int i = 0; i<h ;i++){
        cin >> h_p;

    for(int j = 0; j<w ; j++){
        cin >> num_of_beds;

        if(num_of_beds>=p && p*h_p < check)
            check = p*h_p;

      }
    }

    if(check == res || check > budget)cout<<"stay home\n";
    else cout<<check<<endl;
}
    return 0;
}
