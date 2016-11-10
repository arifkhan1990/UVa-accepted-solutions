#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    int n,l,k,m,j,c=0,c_y,i;
    while(cin>>s && s!="0"){
        c++;c_y=0;
   if(c==1) {
        s1=s;
      reverse(s1.begin(),s1.end());
   }
    else{
            k=j=0;
            reverse(s.begin(),s.end());

        if(s.size()<s1.size())swap(s,s1);
         else s=s,s1=s1;

        for(i=0,k=0;i<s.size();i++,j++){
            if(i>(s1.size()-1)){
                    k = (s[i]-48) + c_y;
                   if(k>9)
                    k = k - 10,c_y=1;
                   else c_y = 0;
                s1 += k+48;
            }else{
             k = (s1[i]-48) + (s[i]-48) + c_y;
                if(k>9)k = k - 10,c_y=1;
                else c_y = 0;
                s1[j]=k+48;
            }
        }
        if(c_y==1)s1+="1";
       }
    }
reverse(s1.begin(),s1.end());
  cout<<s1<<endl;

    return 0;
}
