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
	int n, fx=0, fy=0, fz=0;
	vi es(3);

	cin >> n;

	REP(i, 0, n){
		REP(j, 0, 3){
			cin >> es[j];

			if(j == 0) 
				fx += es[0];
			else if(j == 1) 
				fy += es[1];
			else 
				fz += es[2];
		}
	}

	if(fx == 0 and fy == 0 and fz == 0)
		cout << "YES";
	else 
		cout << "NO";

	return 0;
}

int main(){
	fastIO;
		
	solve();		

	cout << bn;
	return 0;
}
