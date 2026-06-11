//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;

	int z=0;
	string s;
	cin >> s;

	for(size_t i=0; i<s.size(); i++){
		z += s[i];
		cout << z << " ";
		//cout << s[i] + '0' << " ";
	}

	cout << endl << endl << z;

	cout << endl;
	return 0;
}
