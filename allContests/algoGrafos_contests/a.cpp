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
int bfs(const vvi &g, int s, int target);

int main(){
	fastIO;
		
	int t;

	cin >> t;

	while(t--)
		cout << solve();

	cout << bn;
}

int solve(){
	int n, k;

	cin >> n >> k;
	//n++;

	if(k >= n - 1)
		return 1;

	vvi g(n);
	int m = (n * (n - 1)) / 2;

	for(int i=1; i<=m; i++){
		if(i == 1){
			for(int j=i+1; j<=abs((n-1) - k); j++){
				g[i].push_back(j);	
				g[j].push_back(i);	
			}	
		}else{
			for(int k=i+1; k<=n; k++){
				g[i].push_back(k);	
				g[k].push_back(i);	
			}
		}
	}

	return bfs(g, n);		

	return 0;
}

int bfs(const vvi &g, int s, int target){
	vi dist(g.size(), -1);

	qi q;
	q.push(s);
	dist[s] = 0;

	while(not q.empty()){
		int v = q.front();
		q.pop();

		if(v == target)
			return v;

		for(int u : g[v]){
			if(dist[u] == -1){
				dist[u] = dist[v] + 1;
				q.push(u);
			}
		}
	}
	return -1
}
