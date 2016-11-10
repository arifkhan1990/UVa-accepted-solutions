#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

bool check(int n) {
	int temp = sqrt (double(n));
	for (int i = 3; i < temp+1; i+=2)
		if (n % i == 0) return false;
	return true;
}

int main (void) {
	vector<int> v;
	map<int,bool> prime;
    int n,i,j;
    bool b= false;
	v.push_back(2);

	for ( i = 3; i < 1000000; i+=2) {
		if (check(i)) {
			v.push_back(i);
			prime.insert(pair<int,bool>(i,true));
		}
	}
b = true;
	while (cin >> n && n) {
		for (i = 0; i <v.size(); i++) {
 			if (prime[n - v[i]]) {
				cout << n << " = " << v[i] << " + " << n - v[i] << endl;
				b = false;
				break;
			}
		}
		if(b)cout << "Goldbach's conjecture is wrong.\n";
	}
	return 0;
}
