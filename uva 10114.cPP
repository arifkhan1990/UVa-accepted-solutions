#include<bits/stdc++.h>
using namespace std;

int main() {
  int d,d_n,m,re;
  double d_p, l,dp[101],d1,l_d,c_l;

  while (cin >> d >> d_p >> l >> d_n && d>=0) {
        re=l_d=c_l=0;
    while (d_n--) {
      cin >> m >> d1;
      for (int i = m; i < 101; i++)
        dp[i] = d1;
    }
    l_d = l / d,c_l = (d_p + l) * (1 - dp[0]);
    while (c_l < l)
      re++,l -= l_d,c_l = c_l * (1 - dp[re]);


    if (re == 1)cout << "1 month" << endl;
     else cout << re << " months" << endl;

  }

  return 0;
}
