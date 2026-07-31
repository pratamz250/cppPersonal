#include <bits/stdc++.h>

using namespace std;

string stuff(string s);

int main(){
	string n;

	cin >> n;

	cout << n << endl;
	n = stuff(n);
	cout << n << endl;

	int aux = stoi(n);

	cout << aux + 1;

	cout << endl;
	return 0;
}

string stuff(string s){
	rotate(s.begin(), s.end() - 1, s.end());

	return s;
}
