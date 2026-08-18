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
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();

int main(){
	fastIO;
		
	solve();		

	//cout << bn;
}

int solve(){
	vvi m(3, vi(3));
	vvi n(3, vi(3, 1));

	REP(i, 0, 3){
		REP(j, 0, 3){
			cin >> m[i][j];
			if(m[i][j] & 1){
				n[i][j] == 0 ? n[i][j] = 1 : n[i][j] = 0;

				if(i + 1 <= 2)
					n[i+1][j] == 0 ? n[i+1][j] = 1 : n[i+1][j] = 0;
				
				if(i - 1 >= 0)
					n[i-1][j] == 0 ? n[i-1][j] = 1 : n[i-1][j] = 0;

				if(j + 1 <= 2)
					n[i][j+1] == 0 ? n[i][j+1] = 1 : n[i][j+1] = 0;

				if(j - 1 >= 0)
					n[i][j-1] == 0 ? n[i][j-1] = 1 : n[i][j-1] = 0;
			}
		}
	}

	REP(i, 0, 3){
		REP(j, 0, 3){
			cout << n[i][j];
		}
		cout << bn;
	}

	return 0;
}

