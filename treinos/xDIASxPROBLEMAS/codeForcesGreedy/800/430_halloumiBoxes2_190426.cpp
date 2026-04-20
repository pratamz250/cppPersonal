#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){
	fastIO;
		
	int t;
	cin >> t;

	while(t--){
		ll n, k, eq;

		cin >> n >> k;

		vll as(n);
		REP(i, 0, n){
			cin >> as[i];
			(i > 0 and as[i-1] == as[i]) ? eq = 1 : eq = 0;
		}

		if(eq == 1){
			cout << "YES" << endl;
			continue;
		}else if (n > k and k > 1){
			cout << "YES" << endl;
			continue;
		}else if(n == k and k > 1){
			cout << "YES" << endl;
			continue;
		}else if(n < k and k > 1){
			cout << "YES" << endl;
			continue;
		}else if(n > k and k == 1){
			cout << "NO" << endl;
			continue;
		}else if(n == 1 and k == 1){
			cout << "YES" << endl;
			continue;
		}else if(n > 1 and k > 1){
			cout << "YES" << endl;
			continue;
		}else{
			cout << "NO" << endl;
			continue;
		}
	}
	
	//cout << endl;
	return 0;
}
