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
	int h, w;

	cin >> h >> w;

	vi l, c;

	char m[h][w];

	REP(i, 0, h){
		REP(j, 0, w){
			cin >> m[i][j];
			if(m[i][j] == '#'){
				l.push_back(i);
				c.push_back(j);
			}
		}
	}

	sort(l.begin(), l.end());
	sort(c.begin(), c.end());

	int menorl = l[0], 
	    maiorl = *(l.end() - 1), 
	    menorc = c[0], 
	    maiorc = *(c.end() - 1);

	REP(i, menorl, maiorl+1){
		REP(j, menorc, maiorc+1){
			cout << m[i][j];
		}
		cout << bn;
	}

	return 0;
}

int main(){
	fastIO;
		
	solve();		

	//cout << bn;
	return 0;
}
