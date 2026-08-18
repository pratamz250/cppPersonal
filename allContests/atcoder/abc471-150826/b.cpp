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
map<string, int> histograma(const vector<string> &s);
string lower(string &s);

int main(){
	fastIO;
		
	solve();	

	//cout << bn;
}

int solve(){
	int n;
	vector<string> s;
	vi ans;

	cin >> n;

	while(n--){
		string si;
		cin >> si;

		si = lower(si);
		//cout << "@" << si << bn;
		
		s.push_back(si);	
	}

	map<string, int> h = histograma(s);

	for(auto e : h){
		//cout << e.second << bn;
		ans.push_back(e.second);
	}

	sort(ans.rbegin(), ans.rend());
	cout << ans[0] << bn;

	return 0;
}

map<string, int> histograma(const vector<string> &s){
	map<string, int> h;

	for(auto e : s)
		++h[e];

	return h;
}

string lower(string &s){
	for(auto &e : s){
		e = tolower(e);
	}

	return s;
}
