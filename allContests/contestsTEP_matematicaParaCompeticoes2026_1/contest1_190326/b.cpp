//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;

	int n;
	cin >> n;

	//vector<ll> zs; //integers
	vector<ll> ans; //not perfect squares

	for(int i=0; i<n; i++){
		int e; //each element of the vector
		cin >> e;
	
		double s = sqrt(e); //square
		ll z = (ll)s; //integer part of the squares
		if(s - z != 0.0) ans.push_back(e);
	}

	sort(ans.begin(), ans.end(), greater<int>());

	//cout << ans[0];
	cout << ans.at(0);

	cout << endl;
	return 0;
}

