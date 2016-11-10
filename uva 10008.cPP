#include<bits/stdc++.h>
using namespace std;
struct Ch{
    char cha;
    int digit;
}ch[31];
bool cmp(Ch a, Ch b) {
    return (a.digit > b.digit);
}
int main()
{
    int k,l,j,i,m,n;
    string s,s1;
    char s2[101];
    for(i=0;i<31;i++)ch[i].digit=0,ch[i].cha=(char)(i+65);
    cin>>n;
    cin.getline(s2,0);
    while(n--){
    cin.getline(s2,101);
    s = s2;
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        for(i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
                ch[s[i]-'A'].digit++;
        }
    }
     stable_sort(ch,ch+26,cmp);
     for (i=0; i<31 && ch[i].digit>0; i++)
            printf("%c %d\n",ch[i].cha,ch[i].digit);
    return 0;
}
