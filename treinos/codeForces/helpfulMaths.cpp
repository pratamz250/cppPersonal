//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	//fastIO;
		
	string s;

	cin >> s;

	vector<char> zs; //integers

	for(size_t i=0; i<s.size(); i++){
		if(s[i] != '+')
			zs.push_back(s[i]);
	}

	sort(zs.begin(), zs.end());

	for(size_t i=0; i<zs.size(); i++){
		if(i != zs.size() - 1)
			cout << zs[i] << "+";
		else if(i == zs.size() - 1)
			cout << zs[i];
	}

	cout << endl;
	return 0;
}
