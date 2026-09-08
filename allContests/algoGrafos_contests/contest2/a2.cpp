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

	cout << bn;
}

int solve(){
	int n;
	string l1, l2;

	cin >> n >> l1 >> l2;

	vvi g(2*n + 1);

	vector<vector<char>> m(2, vector<char>(n));

	for(int i=0; i<n; i++){
		m[0][i] = l1[i];
	}

	for(int i=0; i<n; i++){
		m[1][i] = l2[i];
	}

	/*REP(i, 0, 2){
		REP(j, 0, n){
			cout << m[i][j] << " ";
		}
		cout << bn;
	}*/

	REP(i, 0, 2){
		REP(j, 0, n){
			if(m[i][j] == '0'){
				if(i+1 <= 2){
					
				}
			}		
		}
	}

	return 0;
}

