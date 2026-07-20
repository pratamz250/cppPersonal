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
	int n, t;
	char aux;

	cin >> n >> t;

	vc s(n);

	REP(i, 0, n)
		cin >> s[i];

	while(t--){
		REP(i, 0, n){
			if(s[i] == 'B' and s[i+1] == 'G'){
				//cout << "@1 " << i << bn;
				aux = s[i];
				s[i] = s[i+1];
				s[i+1] = aux;
				i += 2;
				//cout << "@2 " << i << bn;
			}
			//cout << "@3 " << i << bn;
		}
	}

	//cout << bn << bn;
	for(auto e : s)
		cout << e;

	return 0;
}

int main(){
	fastIO;
		
	solve();			

	cout << bn;
	return 0;
}

