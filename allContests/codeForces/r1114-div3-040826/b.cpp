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
map<char, int> histograma(const string &s);

int main(){
	fastIO;
		
	int t;

	cin >> t;

	while(t--)
		solve();

	cout << bn;
}

int solve(){
	const int MAX = 1000000;
	int n, menor=MAX;
	string s, ans;
	char c=' ';

	cin >> n >> s;

	map<char, int> h = histograma(s);

	for(auto e : h)
		menor = min(menor, e.second);

	for(auto e : h)
		if(h[e.first] == menor)
			c = e.first;

	for(size_t i=1; i<s.size(); i++){
		if(s[i-1] != c and s[i] != s[i-1])	
			//cout << s[i-1];
			ans += s[i-1];
	}

	cout << ans.size() << " " << ans << bn;

	return 0;
}

map<char, int> histograma(const string &s){
	map<char, int> h;

	for(auto c : s)
		++h[c];

	return h;
}
