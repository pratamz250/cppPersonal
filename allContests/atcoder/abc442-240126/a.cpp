//#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define ull unsigned long long
#define oo {1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	int count=0;
		
	fastIO;

	string s;
	cin >> s;

	for(auto e : s){
		if(e == 'i' or e == 'j') count++;
	}

	cout << count;

	cout << endl;
	return 0;
}
