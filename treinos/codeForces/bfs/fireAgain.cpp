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
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();
vi bfs(const vvi &g, int s, int t);

int main(){
	fastIO;
		
	solve();	

	cout << bn;
	return 0;
}

int solve(){
	int n, m, k;

	cin >> n >> m >> k;

	vvi g(n*m);

	REP(i, 0, n){ //complexidade: 4x10^6
		REP(j, 0, m){
			g[i].push_back(j);
			//g[j].push_back(i); //comento porque o grafo nao e bidirecional
		}	
	}

	REP(i, 0, k){
		int s, t;

		cin >> s >> t;

		//@	
	}		

	return 0;
}

vi bfs(const vvi &g, int s, int t){
	vi dist(g.size(), -1);

	queue<int> q;
	q.push(s);
	dist[s] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		int u = v + 1;
		if(dist[u] == -1){
			dist[u] = dist[v] + 1;
			q.push(u);
		}
	}
	return dist;
}
