#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,d,f,i,j,day;
    double c_h,f1,u;
    while(1){
        cin>>h>>u>>d>>f;
        if(h==0)break;
        c_h=day=0;
        f1 = f*u / 100;
        while(1){
            day++;
            c_h += u;
            u-=f1;
            if(u<0)u=0;

            if (c_h > h){ cout << "success on day "<<day<<endl;break;}

            c_h -= d;
            if(c_h<0){cout << "failure on day "<<day<<endl;break;}
        }
    }
    return 0;
}
