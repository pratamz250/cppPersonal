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

int main(){
	//fastIO;

	int h, w, count=0;
	cin >> h >> w;

	vector<vector<int>> m(h, vector<int>(w));

	REP(i, 0, h){ //hight
		REP(j, 0, w){ //width
			//cima
			if((i+1) - 1 > 0) count++;

			//esq
			if((j+1) - 1 > 0) count++;

			//dir
			if((j+1) + 1 <= w) count++;

			//baixo
			if((i+1) + 1 <= h) count++;

			m[i][j] = count;	
			count = 0;
		}
	}

	REP(i, 0, h){
		REP(j, 0, w){
			cout << m[i][j] << " ";	
		}
		cout << bn;
	}

	//cout << bn;
	return 0;
}
