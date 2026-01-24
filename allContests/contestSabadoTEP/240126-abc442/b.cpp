//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	int q=0, volume=0, state=0;

	fastIO;

	cin >> q;

	for(ll i=0; i<q; i++){
		int a; //appartient a {1,2,3}
		cin >> a;

		if(a == 1){
			volume++;
		}
		else if(a == 2 and volume >= 1){
			volume--;
		}
		else if(a == 3 and state == 0){
			state = 1; //play it
		}else if(a == 3 and state == 1){
			state = 0; //stop it
		}

		if(state == 1 and volume >= 3){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

	//cout << endl;
	return 0;
}
