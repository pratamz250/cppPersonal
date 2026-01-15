#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	//prep
	fastIO;

	ll n, sum=0;
	cin >> n;

	vector<ll> as(n);
	vector<ll> dp(n);

	for(ll i=0; i<n; i++)
		cin >> as[i];

	//base case
	dp[0] = 0;

	//dp
	for(ll i=0; i<n-1; i++){
		ll a1 = as[i] * (-1); //Ai
		//cout << "i: " << i << " " << "a1: " << a1 << endl;
		ll a2 = as[i+1] * (-1); //Ai+1
		//cout << "i: " << i << " " << "a2: " << a2 << endl;
		for(ll j=0; j<n; j++){
			if(j == i){
				sum += a1;
				//cout << "i:" << i << " j:" << j << " a1: " << a1 << " as[]: " << as[j] << " sum: " << sum << endl;
			}
			if(j == i+1){
				sum += a2;
				//cout << "i+1:" << i+1 << " j:" << j << " a2: " << a2 << " as[]: " << as[j] << " sum: " << sum << endl;
			}
			sum += as[j];
		}
		//cout << "i: " << i << " sum: " << sum << endl << endl;
		dp[i+1] = max(dp[i], sum); 
		sum = 0;
	}

	//test @1
	for(auto e : dp)
		cout << e << " ";

	cout << endl;

	//ans
	cout << dp[n-1];

	cout << endl;
	return 0;
}
