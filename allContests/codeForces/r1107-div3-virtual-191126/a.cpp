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
vi divs(int n);

int main(){
	fastIO;
	
	int t;

	cin >> t;

	while(t--)
		solve();

	cout << bn;
}

int solve(){
	int x, y;

	cin >> x >> y;

	vi ds = divs(x);

	for(auto e : ds){
		if(e * y == x){
			cout << "YES" << bn;
			return 0;
		}
	}

	cout << "NO" << bn;

	return 0;
}

template <typename T> void printv(const vector<T> &v){
	for(const auto &e : v){
		cout << e << " ";
	}	

	cout << bn;
}

vi divs(int n){
	vi ds;

	for(int i=1; i*i <= n; i++){
		if(n % i == 0){
			ds.push_back(i);

			if(i != n/i)
				ds.push_back(n/i);
		}
	}

	return ds;
}
