//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;

	ll t=0; 
	cin >> t;

	for(ll i=0; i<t; i++){
		int count=0;
		string n;
		cin >> n;
		ll aux = stoi(n);

		for(size_t j=0; j<n.size(); j++)
			if(n[j] != '0') count++;
		
		cout << count << endl;
		int mod=10;
		for(size_t k=0; k<n.size(); k++){

			if(aux % mod != 0)
				cout << aux % mod << " ";

			aux = aux - (aux % mod);
			mod *= 10;
		}
		cout << endl;
	}

	//cout << endl;
	return 0;
}
