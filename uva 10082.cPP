#include<bits/stdc++.h>
using namespace std;

int main()
{
    string u_key ="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int n,i,j;
    char ch;
    size_t p;
    while(cin.get(ch)){
        if(ch==32 || ch == '\n')cout<<ch;
        else{
            p = u_key.find(ch);
            cout<<u_key[p-1];
        }
    }
    return 0;
}
