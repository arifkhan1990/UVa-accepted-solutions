/*                                                CODEMAN
                                              Arif Khan Nihar
                                       Uva 324 - Factorial Frequencies
                                             date -> 23/10/2016

                                             */
#include<bits/stdc++.h>
using namespace std;
string res[50001],sum[50001];

string add(string s1,string s2,int n1);

string multiply(string st1,int n){
          string s="";
    int l = 0 , c = 0 , ll = 0;
    for(int i = 0; i<st1.size() ; i++){
        l = ((st1[i]-48) * n)+l;
        if(l>9)ll = l%10,l/=10;
        else ll = l,l=0;
        s += (ll+48);
    }
    if(l!=0)s += (l+48) ;

    return s;
}
string convert_length(string sd,string st,int t){
    string ssd="",ssf="";
    for(int i = 0; i <st.size()+t ; i++){
            if(i<t)
            ssd += sd[i];
            else
            ssd += st[i-t];
    }
    ssf = add(sd,ssd,t);
    return ssf;
}
string add(string s1,string s2,int t1){
    string rs;
    int l=0,k=0,c=0;
    k = max(s1.size(),s2.size());
    for(int i = 0 ;i<t1;i++)rs += s2[i];
    for(int i = t1;i<k;i++){
        if(i > s1.size()-1){
            l = (s2[i] - 48) + c,c=0;
        }else if(i > s2.size()-1){
              l = (s1[i] - 48) + c,c=0;
        }else{
            l =   l = (s1[i]-48)+(s2[i]-48) + c,c=0;
        }
        if(l>9){
            l = l-10,c=1;
        }
        rs+= l + 48;
    }
    if(c==1)rs+="1",c=0;
    return rs;
}

string prot(string s,string s1){
    int j,j1=0,p=0,l=0;
    string s4="";
    reverse(s.begin(),s.end());
     reverse(s1.begin(),s1.end());
     if(s.size()<s1.size())swap(s,s1);
                for( j = 0; j< s1.size();j++){
                        res[j]=multiply(s,(s1[j]-48)),p++;
        }
        if(p==1)
            s4 = res[0];
        else if(p==2){
            s4 = convert_length(res[0],res[1],1);
        }
        else{
        for( j1 = 2; j1<=p ; j1++,l++)
            res[j1-1] = convert_length(res[j1-2],res[j1-1],l+1);

        s4 = res[j1-2];
    }
        reverse(s4.begin(),s4.end());
        return s4;
}

string fac(int n){
    string s1,s2;int i=0;char ss[10001];
    bool b = true;
    sum[1] = "1";//sum[2] = "2";
    for( i = 2;i<=n; i++){
            sprintf(ss,"%d",i);
        sum[i] = prot(sum[i-1],ss);
    }
    s1 = sum[i-1];
    return s1;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    while(cin>>n){
            if(n==0 || n>410) break;
            int num[10] = {0,0,0,0,0,0,0,0,0,0};
        string s = fac(n);

        for(int i = 0;i<s.size();i++){
            num[s[i]-48]++;
        }
        cout<<n<<"! --"<<endl;
        for(int i = 0; i<10 ;i++){
            printf("   (%d)%5d", i, num[i]);
            if(i==4 || i==9)cout<<endl;
        }

      for(unsigned long int i=0 ; i<n ; i++)
      res[i].clear(),sum[i].clear();
    }

    return 0;
}



