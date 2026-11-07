#include <bits/stdc++.h>
using namespace std;

// Types
using ll = long long;

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
map<char, int> histogram(string &s);

int main(){
	fastIO;
	
	int t;

	cin >> t;

	while(t--)
		solve();

	//cout << bn;
}

int solve(){
	int n, m;
	string p, q, target = "isx", ans;

	cin >> n >> m >> p >> q;
	/*cout << p << " " << q << bn;

	for(auto e : h1)
		cout << e.first << " " << e.second << " | ";
	cout << bn;

	for(auto e : h2)
		cout << e.first << " " << e.second << " | ";
	cout << bn << bn;*/

	map<char, int> h1 = histogram(p);
	map<char, int> h2 = histogram(q);

	for(auto e : h2){
		auto it = h1.find(e.first);

		if(it != h1.end()){
			if(e.second == it->second){
				it->second = 0;
			}	
		}
	}

	for(auto e : h1){
		if(e.second != 0)
			ans.push_back(e.first);
	}

	cout << (ans == target ? "YES" : "NO") << bn;

	return 0;
}

template <typename T> void printv(const vector<T> &v){
	for(const auto &e : v){
		cout << e << " ";
	}	

	cout << bn;
}

map<char, int> histogram(string &s){
	map<char, int> h;

	for(auto c : s){
		++h[c];
	}

	return h;
}
