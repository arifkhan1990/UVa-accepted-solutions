#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "1" or s == "4" or s == "78")
            cout << "+" << endl;
        else if(s[s.size()-1] == '5' and s[s.size()-2] == '3')
            cout << "-" << endl;
        else if(s[0] == '9' and s[s.size()-1] == '4')
            cout << "*" << endl;
        else
            cout << "?" << endl;
    }
    return 0;
}
