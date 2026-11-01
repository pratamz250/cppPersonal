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
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using ii = pair<int, int>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();
void tosee(const vi &v);

int main(){
	fastIO;

	int t;

	cin >> t;

	while(t--)
		solve();

	cout << bn;
}

int solve(){
	int n, m;
	string p, q, target = "isx";
	vi complete;

	cin >> n >> m >> p >> q;

	vector <pair<int, int>> flags;
	for(int i=0; i<m; i++){
		flags.push_back({0, 0});
	}

	//Base case
	/*if(m > n){
		cout << "No" << bn;
		return 0;
	}
	if(m == 3 and p != target){
		cout << "No" << bn;
		return 0;
	}*/

	sort(p.begin(), p.end());
	sort(q.begin(), q.end());

	REP(i, 0, n){
		REP(j, 0, m){
			if(p[i] == q[j] and flags[j].first == 0){
				flags[j].first = 1;
				flags[j].second = i;
			}
		}
	}	

	cout << p << bn << q << bn;
	for(size_t i=0; i<flags.size(); i++){
		cout << flags[i].first << " " << flags[i].second << bn;
	}
	
	REP(i, 0, m){
		if(flags[i].second == flags[i+1].second){
			int count = flags[i].second + 1;
			while(count != flags[i+1].second){
				complete.push_back(count);
				count++;
			}
		}
	}
	tosee(complete);

	cout << "@@@" << bn << bn;
	return 0;
}

void tosee(const vi &v){
	for(auto e : v)	
		cout << "@" << e << " ";

	cout << bn;
}
