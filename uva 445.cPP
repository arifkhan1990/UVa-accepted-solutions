#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l;
   // string s,s1;
    char s;k=0;
    while ((s = getchar()) != EOF) {
                if(s>='0' && s<='9'){
                k += s - 48;
                }
           else if((s >='A' && s<='Z') || s == '*'){
                for(j = 1;j<=k;j++) printf("%c",s);
                k=0;
            }
            else if(s == 'b'){
            for(j = 1;j<=k;j++) cout<<' ';
                k=0;
            }
            else if(s == '!')
                cout<<"\n";
        else if(s == '\n')
           cout<<endl;
    }
    return 0;
}
