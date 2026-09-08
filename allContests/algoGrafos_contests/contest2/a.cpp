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
	int n, countBaseCase=0;

	cin >> n;

	vector<vector<int>> m(2, vector<int>(n));

	REP(i, 0, 2){
		REP(j, 0, n){
			cin >> m[i][j];
			if(m[i][j] == 0) countBaseCase++;
		}
	}

	if(countBaseCase == 2){
		cout << "NO";
		return 0;
	}

	if(countBaseCase == 2*n){
		cout << "YES";
		return 0;
	}	

	REP(i, 0, 2){
		cout << bn;
		REP(j, 0, n){
			cout << m[i][j] << " ";
		}
	}

	return 0;
}

