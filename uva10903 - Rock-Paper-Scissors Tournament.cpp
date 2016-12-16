/*                                                CODEMAN
                                              Arif Khan Nihar
                                Uva 10903 - Rock-Paper-Scissors Tournament
                                             date -> 16/12/2016

                                             */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int p,m=0,p1,p2,k=0;
    string s1,s2;
    while(cin >> p){
            if(p == 0) break ;
            if(k != 0 ) cout << endl;
        cin >> m;
        m = m*p*(p-1)/2;
        int p_ar[p+2] , p_l[p+2] ;
        float ans ;
        memset(p_ar,0,sizeof p_ar);
        memset(p_l,0,sizeof p_l);
        while(m--){
            cin >> p1 >> s1 >> p2 >> s2;
            if(s1 == "paper" and s2 == "rock") p_ar[p1]+=1,p_l[p2] += 1;
            if(s2 == "paper" and s1 == "rock") p_ar[p2]+=1,p_l[p1] += 1;
            if(s1 == "scissors" and s2 == "paper") p_ar[p1]+=1,p_l[p2] += 1;
            if(s2 == "scissors" and s1 == "paper") p_ar[p2]+=1,p_l[p1] += 1;
            if(s2 == "scissors" and s1 == "rock") p_ar[p1]+=1,p_l[p2] += 1;
            if(s1 == "scissors" and s2 == "rock") p_ar[p2]+=1,p_l[p1] += 1;

        }
        char res;
        for(int i = 1; i<= p ;i++){
            ans = ((float)p_ar[i]/(p_ar[i]+p_l[i]));
            if(p_ar[i] == 0 and p_l[i] == 0)
                cout << '-' << endl;
            else
                cout << fixed << setprecision(3) <<ans << endl;
        }
        k = 1;
    }

    return 0;
}


