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
	int k;

	cin >> k;

	vi bs(k);

	REP(i, 0, k)
		cin >> bs[i];

	sort(bs.begin(), bs.end());

	if(bs[bs.size() - 1] != 9)
		cout << -1 << bn;
	else
		cout << bs[0] << bn;

	return 0;
}

template <typename T> void printv(const vector<T> &v){
	for(const auto &e : v){
		cout << e << " ";
	}	

	cout << bn;
}
