/*                                                CODEMAN
                                              Arif Khan Nihar
                                        Uva 202 - Repeating Decimals
                                             date -> 23/10/2016

                                             */
#include<bits/stdc++.h>
using namespace std;

map<int, int>m;
vector<int>res;

int main()
{
    //freopen("in.txt","r",stdin);
    int numerator,denominator,n,i,j,d;

    while(cin>>numerator>>denominator){
            int a = numerator,b = denominator;
            int l=0;
            d = numerator/denominator;
            numerator = (numerator%denominator) * 10;
        while(true){
            if (m.find(numerator) != m.end()) {
                l = res.size() - m[numerator];
                break;
            }
            m[numerator] = res.size();

                if(numerator==0){
                       l = 1;
                       res.push_back(0);
                       break;
                }else if(numerator<denominator){
                        numerator*=10;
                            res.push_back(0);
                            continue;
                        }
                        res.push_back(numerator/denominator);
                        numerator = (numerator%denominator)*10;
                }

            cout<< a << "/" << b <<" = "<<d<<".";
            for (i = 0 ; i < res.size() ;i++) {
            if (i == 50) {
                cout << "...";
                break;
            }
            if (i == m[numerator]) {
                cout << "(";
            }
             cout << res[i];
         }
             cout << ")" << endl;

             cout << "   " << l << " = number of digits in repeating cycle" << endl;

             cout << endl;

             res.clear();m.clear();
    }
    return 0;
}






