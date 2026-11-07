#include <bits/stdc++.h>
using namespace std;

// Types
using ll = long long;
using vi = vector<int>;

// Constants
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

// Macros
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define bn '\n'

// Functions
int solve();
template <typename T> void printv(const vector<T> &v);

int main(){
	fastIO;
	
	solve();	

	//cout << bn;
}

int solve(){
	int n, q;

	cin >> n >> q;

	vi ks(q), xs(n), ans(n);
	iota(xs.begin(), xs.end(), 1);	

	REP(i, 0, q){
		int k;

		cin >> k;

		vi aux(k);

		int index = k - 1;
		for(int j=0; j<k; j++){
			aux[j] = (xs[index] * (-1));
			index--;
		}
		//printv(aux);
		
		REP(l, 0, k){
			xs[l] = aux[l];
		}
	}
	printv(xs);
	
	return 0;
}

template <typename T> void printv(const vector<T> &v){
	for(const auto &e : v){
		cout << e << bn;
	}	

	//cout << bn;
}
