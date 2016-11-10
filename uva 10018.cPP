#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long x,y,tt;
    int n,c,k,l;
    string s,s1;
    char s2[101],xy[101];
    cin>>n;
    while(n--){
            c=0;
        cin>>x;

        y = x;

         sprintf(xy,"%lu", y);
         s1=xy;
        sprintf(s2,"%lu", x);
        s = s2;
        reverse(s.begin(),s.end());
        if(s!=s1){
                while(s!=s1){
          for(int i = s1.size()-1,j=0;i>=0;i--,j++)xy[j]=s1[i];
                       c++;

          x = strtoul (s2,NULL,10);
          y = strtoul (xy,NULL,10);
           x = x+y;

          y=x;
          s1.clear(),s.clear();
         sprintf(xy,"%lu", y);
         s1=xy;
        sprintf(s2,"%lu", x);
        s = s2;
        reverse(s.begin(),s.end());
        int t2 = s.size();
        int t1 = s1.size();

        xy[t1]='\0',s2[t2]='\0';

                }
             cout<<c<< " "<<x<<endl;

        }else{
            cout<<c<< " "<<x<<endl;
        }

    }
    return 0;
}
