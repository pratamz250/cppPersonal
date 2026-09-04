#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfs(const vector<vector<int>> &g, int s);

int main(){
	int n, m, s;

	cin >> n >> m >> s;

	vector<vector<int>> g(n+1);

	for(int i=0; i<m; i++){
		int u, v;

		cin >> u >> v;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<int> dist = bfs(g, s);

	for(auto e : dist)
		cout << e << " ";

	cout << endl;
	return 0;
}

vector<int> bfs(const vector<vector<int>> &g, int s){
	vector<int> dist(g.size(), -1);

	queue<int> q;
	q.push(s);
	dist[s] = 0;

	while(not q.empty()){
		int v = q.front();
		q.pop();

		for(int u : g[v]){
			if(dist[u] == -1){
				dist[u] = dist[v] + 1;
				q.push(u);
			}
		}
	}

	return dist;
}
