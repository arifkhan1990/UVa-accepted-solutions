#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int n,i,j;
  char s1[6];
  cin >> n;
  while(n--){
      cin >> s1;
      if(strlen(s1) == 5){
          cout << "3" << endl;
      } else if((s1[0] == 'o' && s1[1] == 'n') || (s1[0] == 'o' && s1[2] == 'e') || (s1[1] == 'n' && s1[2] == 'e') ){
              cout << "1" << endl;
      } else{
              cout << "2" << endl;
      }
  }
    return 0;
}
