/*                                                 CODEMAN
                                                ARIF KHAN NIHAR
                                        Uva 10334- Ray Through Glasess
                                              date -> 20/10/2016

                                            */
#include<bits/stdc++.h>
using namespace std;
string num[5001];
string make(string s1,string s2){
    string res;
    int l=0,k=0,c=0;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    k = max(s1.size(),s2.size());
    for(int i = 0;i<k;i++){
        if(i > s1.size()-1){
            l = s2[i]-48 + c,c=0;
        }else if(i > s2.size()-1){
              l = s1[i]-48 + c,c=0;
        }else{
            l =   l = (s1[i]-48)+(s2[i]-48) + c,c=0;
        }
        if(l>9){
            l = l-10,c=1;
        }
        res+= l + 48;
    }
    if(c==1)res+="1",c=0;
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int n ;
    num[0]="1",num[1]="2";
    for(int i = 2;i<1001;i++){
          num[i] += make(num[i-2],num[i-1]);
    }
    while(cin>>n && n<1001){
    cout<<num[n]<<endl;
    }
    return 0;
}

