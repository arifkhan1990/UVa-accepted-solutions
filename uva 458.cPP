#include <iostream>
#include <string>
using namespace std;

int main () {
   string s;

   while (getline(cin, s)) {
      for (int i = 0; i < s.size(); i++)
	    s[i] = s[i] - 7;

      cout << s << endl;
   }

   return 0;
}

