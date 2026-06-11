#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){
	fastIO;

	ll n, x=1;
	string ans;
	cin >> n;

	while(x <= n/x){
		if(n % x == 0){ //n = 0 (mod x)
			//cout << x << " " << n/x << endl;
			ans = to_string(x) + " " + to_string(n/x);
		}
		x++;
	}
	cout << ans;

	cout << endl;
	return 0;
}
