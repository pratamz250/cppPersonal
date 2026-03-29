#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;

	int n;
	string s;
	cin >> n >> s;		

	for(int i=0; i<n; i++){
		string s;
		cin >> s;
	}

	if(n & 1){
		cout << "contest";
	}else{
		cout << "home";
	}

	cout << endl;
	return 0;
}
