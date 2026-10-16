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
map<int, int> hist(const vi &v);

int main(){
	fastIO;
		
	int t;

	cin >> t;

	while(t--)
		solve();

	//cout << bn;
}

int solve(){
	int n;
	map<int, int> m;

	cin >> n;

	vi as(n);
	REP(i, 0, n){
		int aux;
		cin >> aux;
		as[i] = abs(aux - 2);
	}

	map<int, int> h = hist(as);
	for(const auto &e : h)
		cout << e.first << " : " << e.second << bn;

	auto lastPair = prev(h.end());

	cout << lastPair->second << bn;

	return 0;
}

map<int, int> hist(const vi &v){
	map<int, int> h;

	for(auto e : v)
		++h[e];

	return h;
}
