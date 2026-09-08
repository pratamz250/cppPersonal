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

int main(){
	fastIO;
		
	int t;

	cin >> t;

	while(t--)
		cout << solve();

	cout << bn;
}

int solve(){
	int n, k, m;

	cin >> n >> k;
	m = (n * (n-1))/2;

	vi g(n);
	vector<bool> visited(n, false);

	if(k >= n-1)
		return 1;

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

	return 0;
}

void dfs(int v){
	visited[v] = true;	

	for(int u : g[v]){
		if(not visited[u]){
			//count++
			dfs(u);
		}
	}
}
