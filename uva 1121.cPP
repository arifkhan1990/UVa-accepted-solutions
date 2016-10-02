#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t,n;
  string s,s1;
  char ch;

  cin >> n;
 cin.ignore(100, '\n');
  for (int i = 1;  i<=n; i++) {


   s = "";
    while (cin.peek() != '\n' && cin.peek() != -1) {
      cin>>ch;
      if (ch >= 'a' && ch <= 'z')
        s += ch;
    }
    cin.ignore(100, '\n');


 cout << "Case #" << i << ":" << endl;
     t = sqrt(s.size());


   /* if (input != string(input.rbegin(), input.rend())) {
      cout << "No magic :(" << endl;
      continue;
    }*/

    s1 = "";

    for (int i1 = 0; i1 < t; i1++)
      for (int j = 0; j < t; j++)
        s1 += s[i1 + j*t];

   if ((t * t != s.size()) || (s!= string(s.rbegin(), s.rend())) || s1!=s ){
      cout << "No magic :(" << endl;
      continue;
    }


  /*  if (s1 != s) {
      cout << "No magic :(" << endl;
      continue;
    }
*/
    cout << t << endl;
  }

  return 0;
}

