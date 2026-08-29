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
map<int, int> hist(const vi &as);

int main(){
	fastIO;
		
	solve();		

	cout << bn;
}

int solve(){
	int n;
	int ans=0;

	cin >> n;

	vi as(n);
	REP(i, 0, n)
		cin >> as[i];

	map<int, int> h = hist(as);

	for(const auto &c : h){
		if(c.second 
	}

	return 0;
}

map<int, int> hist(const vi &as){
	map<int, int> h;

	for(auto e : as)
		++h[e];

	return h;
}
