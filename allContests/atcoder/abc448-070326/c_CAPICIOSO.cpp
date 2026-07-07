//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	ll n, q;	

	cin >> n >> q;

	vector<ll> as(n);

	for(ll i=0; i<n; i++)
		cin >> as[i];

	for(ll i=0; i<q; i++){
		int k;
		cin >> k;

		vector<ll> bs(k);
		for(int j=0; j<k; j++){
			cin >> bs[j];
			int aux = bs[j];
			as[aux-1] = 0;
		}
		//@1: CAPICIOSO!
	}
	
	cout << endl;
	return 0;
}
