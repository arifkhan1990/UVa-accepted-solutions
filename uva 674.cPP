#include <bits/stdc++.h>
using namespace std;

#define N 8000
#define M 5

static int a[N] = {1, 1, 1, 1, 1};

int main()
{
    register int i, j;

    for(j = M; j < N; ++j)
        if(i==M) a[j] += a[j - 1];

     for(j = 5; j < N; ++j)
        a[j] += a[j - 5];

    for(j = 10; j < N; ++j)
        a[j] += a[j - 10];

    for(j = 25; j < N; ++j)
        a[j] += a[j - 25];

    for(j = 50; j < N; ++j)
        a[j] += a[j - 50];

    int n;
    while(scanf("%d", &n) == 1)
        printf("%d\n", a[n]);

    return 0;
}
/*
const int cent[] = { 1, 5, 10, 25, 50 };
const int M = 5, N = 7489;
long long value[N+5];

int main() {
    int n,i,j;
     for (i=1; i<=N; i++)
        value[i] = 0;
    value[0] = 1;

    for (i=0; i<M; i++)
        for (j=0; j<=N; j++){
            if (j>=cent[i]) {
                    value[j] += value[j-cent[i]];
            }
        }

    while (cin >> n)
        cout << value[n] << endl;
}*/
