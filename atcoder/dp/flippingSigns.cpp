#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	//prep
	fastIO;

	ll n, sum=0, count=0;
	cin >> n;

	vector<ll> as(n);
	vector<ll> dp(n);

	for(ll i=0; i<n; i++)
		cin >> as[i];

	//base case
	dp[0] = 0;

	//dp
	for(ll i=0; i<n-1; i++){
		if(i == count){
			ll a1 = as[i] * (-1); //Ai
			sum += a1;
		}
		if(i == count+1){
			ll a2 = as[i+1] * (-1); //Ai+1
			sum += a2;
		}
		sum += as[i];

		count++;
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
