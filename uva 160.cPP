/*                                                CODEMAN
                                              Arif Khan Nihar
                                       Uva 160 - Factors and Factorials
                                             date -> 23/10/2016

                                             */
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,j,k,m,l;
    int prime_num[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    while(cin>>n && n){
        int ans[25] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(i = 2;i<=n;i++){
                k = i;
            for(j=0;j<25 and prime_num[j]<=k;j++){
                while(k%prime_num[j] == 0){
                        k/=prime_num[j];
                    ans[j]++;
                }
            }
        }
            int max = 0;
      for ( i = 0; i < 25; i++) {
         if (ans[i] > 0) max = i;
      }

        cout << setw(3) << n << "! =";
        for(i = 0; i<=max ; i++){
            if(i>0 && i%15 == 0) cout<<endl<<"      ";
            cout<<setw(3)<<ans[i];
        }
        cout << endl;
    }

    return 0;
}


