/*
                                                  CODEMAN
                                              ARIF KHAN NIHAR
                                    uva 10469 - To Carry or not to Carry

*/
#include <stdio.h>

int main(){
    unsigned int a, b;

    while(scanf("%u %u", &a, &b) != EOF){
                    printf("%u\n", a ^ b);
    }

    return 0;
}
