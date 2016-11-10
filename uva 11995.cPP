#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("11995.txt","r",stdin);

    int n,a,b,i,j;
    while(cin>>n){
    stack<int>s;
    queue<int>q;
    priority_queue<int>pq;
    bool s1,q1,pq1;
    s1 = q1 = pq1 = true;
    while(n--){
    scanf("%d %d",&a,&b);
    if(a==1){
        s.push(b),q.push(b),pq.push(b);
    }else{
        if(s1){
            if(s.empty() || s.top() != b)s1 = false;
            else s.pop();
        }
        if(q1){
            if(q.empty() || q.front() != b)q1 = false;
            else q.pop();
        }
        if(pq1){
            if(pq.empty() || pq.top() != b)pq1 = false;
            else pq.pop();
        }
    }
}
if(!s1 && !q1 && !pq1)
    cout<< "impossible" <<endl;
else if(s1 && !q1 && !pq1)
    cout<< "stack" <<endl;
else if(!s1 && q1 && !pq1)
    cout<< "queue" <<endl;
else if(!s1 && !q1 && pq1)
    cout<< "priority queue" <<endl;
else
    cout<< "not sure" <<endl;
    }

    return 0;
}
