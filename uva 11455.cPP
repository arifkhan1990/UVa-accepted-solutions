#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int k,a;
  cin >> k;

  while (k--) {
        vector<int>sides;
    for (int i = 0; i < 4; i++){
      cin >> a;sides.push_back(a);
    }

       sort(sides.begin(),sides.end());

      if (sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3]) {
        cout << "square" << endl;
      } else if (sides[0] == sides[1] && sides[2] == sides[3]) {
        cout << "rectangle" << endl;
      } else if (sides[0] + sides[1] + sides[2] > sides[3]) {
        cout << "quadrangle" << endl;
      } else {
        cout << "banana" << endl;
      }
  }

  return 0;
}
