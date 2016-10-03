#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n;
    cin >> k;
    while (k--) {
        cin >> n;
        n = (((((n*567)/9)+7492)*235)/47)-498;
        n /= 10; n%=10;
        cout << abs(n) << endl;
    }
    return 0;
}

