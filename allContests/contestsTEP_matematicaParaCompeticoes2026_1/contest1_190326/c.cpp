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
	int z;

	cin >> s;
	cin >> z;

	if(s == "front" and z == 1){
		cout << "L";
	}else if(s == "front" and z == 2){
		cout << "R";
	}else if(s == "back" and z == 1){
		cout << "R";
	}else if(s == "back" and z == 2){
		cout << "L";
	}

	cout << endl;
	return 0;
}

