#include<bits/stdc++.h>
using namespace std;
#define maxN 10001
int main()
{
    int n = 0, a[maxN];
   /* long n=0;
    vector<int>file;
    while(cin>>n){
            file.push_back(n);
         sort(file.begin(),file.end());
         if (file.size()%2==0)cout<< (file[file.size()/2]+file[file.size()/2-1])/2 <<endl;
        else cout<<file[file.size()/2]<<endl;
    }*/
        while (scanf("%d", &a[++n])!=EOF) {
        for (int i=n-1; i>=1; i--)
            if (a[i] > a[i+1]) swap(a[i], a[i+1]);
            else break;
        if (n%2) printf("%d\n", a[(n+1)/2]);
        else printf("%d\n", (a[n/2] + a[n/2+1])/2);
        }
    return 0;
}
