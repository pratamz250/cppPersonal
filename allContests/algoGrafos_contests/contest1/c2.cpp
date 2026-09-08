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
int dfs(int v, int s);

vvi g;
vi visited;

int main(){
	fastIO;
		
	solve();

	cout << bn;
}

int solve(){
	int n, s;

	cin >> n >> s;

	vi ida(n), volta(n);
	g.resize(n+1);
	visited.resize(n+1);

	REP(i, 0, n)
		cin >> ida[i];

	REP(i, 0, n)
		cin >> volta[i];

	REP(i, 0, n){
		if(ida[i] == 1){
			REP(j, i+1, n){
				if(volta[j] == 1){
					g[i].push_back(j);
				}
			}
		}
	}

	reverse(volta.begin(), volta.end());
	
	REP(i, 0, n){
		if(volta[i] == 1){
			REP(j, i+1, n){
				if(ida[j] == 1){
					g[i].push_back(j);
				}
			}
		}
	}

	cout << (dfs(1, s) == 0 ? "YES" : "NO");

	return 0;
}

int dfs(int v, int s){
	visited[v] = true;

	if(v == s)
		return 0;

	for(auto u : g[v])
		if(visited[u] == false)
			dfs(u);

	return 1;
}
