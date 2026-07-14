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

ll solve(){
	int n, flag=0;
	ll ans = oo;

	cin >> n;

	vll as;

	REP(i, 0, n){
		int e; cin >> e;
		as.push_back(e);
		
		if(i > 0 and as[i] < as[i-1]){
			flag++;
		}

		if(i > 0){
			ll m = as[i-1] + (as[i] - as[i-1])/2;
			//cout << as[i-1] << " " << as[i] << " " << m << bn;
			ans = min(ans, abs(m - as[i-1]));
		}
	}

	if(flag > 0){
		return 0;
	}else{
		return ans + 1;	
	}

	return 0;
}

int main(){
	fastIO;
		
	int t;
	cin >> t;

	while(t--)
		cout << solve() << bn;

	//cout << bn;
	return 0;
}

