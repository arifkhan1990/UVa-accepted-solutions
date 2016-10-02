#include<iostream>
using namespace std;
int main()
{
   unsigned long x,y;
    while(cin>>x>>y){
        if(y>x)cout<<y-x<<endl;
        else cout<<x-y<<endl;
    }
    return 0;
}
