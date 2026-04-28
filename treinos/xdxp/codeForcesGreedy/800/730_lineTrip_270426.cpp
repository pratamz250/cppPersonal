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
		int n, x;
		cin >> n >> x;

		vi as(n);
		REP(i, 0, n) cin >> as[i];

		if(n > 1) cout << x - n << endl;
		else if(n == 1) cout << as[0] << endl;
	}

	//cout << endl;
	return 0;
}
