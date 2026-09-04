#include<iostream>
#include<vector>

using namespace std;

void dfs(int v);

vector<vector<int>> g;
vector<bool> visited;

int main(){
	int n, m, s;

	cin >> n >> m >> s;

	g.resize(n+1);
	visited.resize(n+1, false);

	for(int i=0; i<m; i++){
		int u, v;

		cin >> u >> v;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	dfs(s);

	for(auto e : visited)
		cout << e << " ";

	cout << endl;
	return 0;
}

void dfs(int v){
	visited[v] = true;	

	for(auto u : g[v])
		if(visited[u] == false)
			dfs(u);
}
