#include<bits/stdc++.h>
using namespace std;

string result(string s){

    if(s == "HELLO")
        return "ENGLISH";
    else if(s == "HOLA")
        return "SPANISH";
    else if(s == "HALLO")
        return "GERMAN";
    else if(s == "BONJOUR")
        return "FRENCH";
    else if(s == "CIAO")
        return "ITALIAN";
    else if(s == "ZDRAVSTVUJTE")
        return "RUSSIAN";
    else
        return "UNKNOWN";
}
int main()
{
    string name;
    int i = 0;
    while(cin >> name and name != "#"){
        cout << "Case " << ++i << ": " << result(name) << endl;
    }
    return 0;
}
