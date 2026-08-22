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
	int n, esq=0, dir=0;

	cin >> n;

	vi ls(n);
	REP(i, 0, n)
		cin >> ls[i];

	sort(ls.begin(), ls.end());
	/*REP(i, 0, n)
		cout << ls[i] << " ";

	cout << bn << bn;*/

	size_t indexDir = ls.size() - 1;
	size_t indexEsq = 0;

	esq += ls[0];
	dir += ls[ls.size() - 1];

	for(size_t i=1; i<=ls.size()-2; i++){
		if(indexDir == indexEsq){
			//cout << "@" << indexEsq << " " << indexDir << bn;
			if(esq < dir){
				esq += ls[indexEsq];
			}
			break;
		}

		if(i == 1){
			indexDir--;
			indexEsq++;
		}

		if(esq < dir){
			esq += ls[indexEsq];	
			//cout << "1@ " << esq << bn;
			//cout << "1@ " << ls[i] << bn;
			//cout << "2@ " << ls[indexEsq] << bn;
			indexEsq++;
		}else{
			dir += ls[indexDir];
			//cout << "2@ " << dir << bn;
			//cout << "2@ " << ls[indexDir] << bn;
			//cout << "2@ " << ls[indexDir] << bn;
			indexDir--;
		}
	}

	cout << abs(esq - dir) << bn;

	return 0;
}

