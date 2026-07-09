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
	int k;

	cin >> k;

	vi cs(k);
	REP(i, 0, k) cin >> cs[i];

	sort(cs.begin(), cs.end());

	if(*(cs.end() - 1) >= 2 and *(cs.end() - 2) >= 2){
		cout << "Yes" << bn;
	}else{
		cout << "No" << bn;
	}

	return 0;
}

int main(){
	fastIO;
		
	int t;
	cin >> t;

	while(t--) solve();

	//cout << bn;
	return 0;
}

