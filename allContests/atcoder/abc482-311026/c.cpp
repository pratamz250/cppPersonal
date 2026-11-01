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
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();
void tosee(const vi &v);

int main(){
	fastIO;

	solve();

	cout << bn;
}

int solve(){
	int h, w, n, q;

	cin >> h >> w >> n >> q;

	vector<vector<int>> v (h, vector<int>(w));
	vector<vector<int>> pref(h+1, vector<int>(w+1));
	vector<vector<string>> qs;

	while(n--){
		int x, y;
		cin >> x >> y;
		v[x-1][y-1] = 7; //sentinel
	}

	REP(i, 0, q){
		char x, y, z;
		string aux;

		cin >> x >> y >> z;
		aux.push_back(x);
		aux.push_back(y);
		aux.push_back(z);

		qs[i].push_back(aux);
	}

	REP(i, 0, h){
		REP(j, 0, w){
			pref[i+1][j+1] = 
						(v[i][j] == 7)
						+ pref[i+1][j]
						+ pref[i][j+1]
						- pref[i][j];
		}
	}

	/*REP(i, 0, h){
		REP(j, 0, w){
			cout << pref[i][j] << " ";
		}
		cout << bn;
	}	
	cout << bn;*/

	for(string e : qs){
		if(e[0] == 1){
			int ans = pref[e[1]+1][e[2]+1]
								- pref[e[1]+1][e[2]]
								- pref[e[1]][e[2]+1]
								+ pref[e[1]][e[2]];

			cout << ans << bn;
		}	
	}	

	return 0;
}

void tosee(const vi &v){
	for(auto e : v)	
		cout << e << " ";

	cout << bn;
}

