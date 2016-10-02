#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,c,result;
  while (cin >> a >> b && (a!=0 || b!=0)) {
    c++;
    cout << "Case " << c << ": ";

    if (b >= a)
      result = 0;
    else if (b * 27 >= a) {
      result = (a - b) / b;
      if ((a-b)%b > 0)
        result += 1;
    } else
      result = -1;

    if (result == -1)
      cout << "impossible" << endl;
    else
      cout << result << endl;
  }
  return 0;
}
