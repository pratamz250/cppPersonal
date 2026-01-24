#include <bits/stdc++.h>
#define ll long long
#define nl unsigned long long 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	//prep
	fastIO;

	ll n;
	cin >> n;

	vector<ll> hs(n+1);
	vector<ll> dp(n+1);

	for(ll i=0; i<n; i++)
		cin >> hs[i];
	
	//base case
	dp[0] = 0;
	dp[1] = abs(hs[1] - hs[0]);

	//dp
	for(ll i=2; i<n; i++){
		ll op1 = dp[i-1] + abs(hs[i] - hs[i-1]);
		ll op2 = dp[i-2] + abs(hs[i] - hs[i-2]);
		dp[i] = min(op1, op2);
	}

	//ans
	cout << dp[n-1];
	
	cout << endl;
	return 0;
}
