#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("tt.txt","r",stdin);
    int n,k,l,i,j,x,y,res=0;
    queue<pair<int, int> >p;
    priority_queue<int>pq;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>x>>y;
    for(i=0;i<x;i++){
            cin>>k;
            p.push(make_pair(k, i) );
            pq.push(k);
        }

        res=0;
    while(!p.empty()){
          if(p.front().first == pq.top()){
            res++;
            if(p.front().second == y){
                break;
            }
            p.pop();
            pq.pop();
          }else{
              p.push( p.front() );
              p.pop();
          }
    }

    cout<<res<<endl;
    while(!p.empty())p.pop();
    while(!pq.empty())pq.pop();
}
    return 0;
}
