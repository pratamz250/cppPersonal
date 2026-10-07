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
using vb = vector<bool>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();

int main(){
	fastIO;

	int t;

	cin >> t;

	while(t--)
		solve();

	//cout << bn;
}

int solve(){
	int x0, y0, r, le;

	cin >> x0 >> y0 >> r;

	//r^2 - x0^2 - y0^2 = x^2 + y^2 - 2*x*x0 - 2*y*y0
	le = r*r - x0*x0 - y0*y0; //lado esquerdo
	//cout << le << bn << bn;

	REP(i, -10, 11){
		REP(j, -10, 11){
			//cout << i*i + j*j - 2*i*x0 - 2*j*y0 << " " << " ";
			if((i*i + j*j - 2*i*x0 - 2*j*y0) == le){
				//cout << "@";
				cout << i << " " << j << bn;
				return 0;
			}
		}
	}

	return 0;
}
