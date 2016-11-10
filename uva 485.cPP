/*
                                                  CODEMAN
                                              ARIF KHAN NIHAR
                                         uva 485 - Pascal Triangel

*/
#include<bits/stdc++.h>
using namespace std;

string sum[1000001];
unsigned long p=0;
string make(string s1,string s2){
    string res;
    int l=0,k=0,c=0;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    k = max(s1.size(),s2.size());
    for(int i = 0;i<k;i++){
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
        res+= l + 48;
    }
    if(c==1)res+="1",c=0;
    reverse(res.begin(),res.end());
    return res;
}
void display_result(){
    int i,j=0;
    cout<<sum[0]<<endl;
    for(i=1;i<21115;i++){
        if(sum[i]=="1")j++;
        if(j==2)j=0,cout<<sum[i]<<endl;
        else cout<<sum[i]<<" ";
    }
}

int main(){
    long  i,j=0,k=0,l=0,c=0,p1=2;
    p=1;
    for( i=0;i<21115;i++){
            if(i < 4)
            sum[i] += "1",l=2;
            else{
                if(l==2){
                l=0;
                c++;
            if(i!=4){
                    k = (2*c)/2,p=k;
                }else{
                k=1;
               }
            }
            if(k==0){
                sum[i] += "1";
                l++;
            }else{
            sum[i] +=  make(sum[i - (p+2)],sum[i - (p+1)]);
            k--;
            }
        }
    }

display_result();
	return 0;
}



