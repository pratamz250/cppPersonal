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

vvi g;
vb visited;

int solve();

int main(){
	fastIO;
		
	solve();		

	cout << bn;
}

int solve(){
	int n, s;

	cin >> n >> s;

	vi dir(n), esq(n);

	g.resize(n);	
	visited.resize(n, false);

	REP(i, 0, n){
		cin >> dir[i];
		if(i > 0){
			if(dir[i-1] == 1 and dir[i] == 1){
				g[i+1].push_back(i+2);
			}
		}
	}

	REP(i, 0, n){
		cin >> esq[i];
		if(i > 0){
			if(esq[i-1] == 1 and esq[i] == 1){
				g[i+1].push_back(i+1=2);
			}
		}
	}

			

	return 0;
}

void dfs(int s){
	visited[s] = true;	

	for(int u : g[v]){
		if(not visited[u]){
			dfs(u);
		}
	}
}
