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
	ll n, q;

	cin >> n;

	vll hs(n), ls(n);
	REP(i, 0, n) cin >> hs[i] >> ls[i];

	cin >> q;

	vll ans(q);
	vd ts(q);

	REP(i, 0, q){
		ll aux=0;

		cin >> ts[i];

		for(int j=n-1; j>=0; j--){
			if(ls[j] > ts[i] + 0.5){
				aux = max(aux, hs[j]);		
			}else break;		
		}
		ans.push_back(aux);
	}

	for(auto e : ans) 
		cout << e << bn;

	return 0;
}

int main(){
	fastIO;
		
	solve();		

	//cout << bn;
	return 0;
}

