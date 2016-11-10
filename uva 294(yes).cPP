/*                                                 CODEMAN
                                                ARIF KHAN NIHAR
                                               Uva 294- Divisors
                                              date -> 20/10/2016

                                            */
#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long

int main(){
   int n,value;
   ulli i,j,num1,num2,index;
   cin>>n;
   while(n--){
        index = value = 0;
    scanf("%lld %lld",&num1,&num2);
     for(ulli i = num1;i<=num2;i++){
        int a = 0;
        ulli t = sqrt(i);
        for(ulli j = 1; j<= t; j++){
            if(i%j == 0) a++;
        }
         a*=2;
         if (t * t == i) --a;
        if(a>value){
            index = i;
            value = a;
        }
     }
     printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",num1,num2,index,value);
   }
    return 0;
}




