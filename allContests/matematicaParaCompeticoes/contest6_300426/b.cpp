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
		ll n, s, t;
		cin >> n >> s >> t;

		vll eggs(n);

		if(n == s and s == t){
			cout << 1 << endl;
			continue;
		}else if(n & 1){
			ll pos = max(s, t);
			REP(i, 0, pos) eggs[i] = 1;
			reverse(eggs.begin(), eggs.end());
			int count=0;
			REP(i, 0, n) 
				if(eggs[i] == 0)
					count++;

			cout << count + 1 << endl;
			continue;
		}else if(!(n & 1)){
			cout << min(s, t) + 1 << endl;
			continue;
		}
	}

	//cout << endl;
	return 0;
}

