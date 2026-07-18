#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define bn '\n'

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vf = vector<float>;
using vd = vector<double>;
using vc = vector<char>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve(){
	int n, m, count=0;

	cin >> n >> m;

	vi as(n), bs(n-1);

	REP(i, 0, n)
		cin >> as[i];

	REP(i, 0, n-1)
		cin >> bs[i];

	REP(i, 0, n-1){
		if(i <= n-1){
			if(bs[i] != (as[i] + as[i+1])%m) count++;
			//cout << "@" << bs[i] << " " << as[i] << " " << as[i+1] << bn;
		}

		if(i == n-1){
			if(bs[i] != (as[i] + as[i+1])%m) count++;
			//cout << "@" << bs[i] << " " << as[i] << " " << as[i+1] << bn;
		}
	}

	return count + 1;
}

int main(){
	fastIO;
		
	cout << solve();		

	cout << bn;
	return 0;
}

