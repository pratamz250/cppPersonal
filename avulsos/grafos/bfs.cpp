#include <iostream> 
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(const vector<vector<int>> &g, int s){
	size_t n = g.size();
	vector<int> dist(n, -1);

	queue<int> q;
	q.push(s);
	dist[s] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		for(int u : g[v]){
			if(dist[u] != -1)
				continue;

			dist[u] = dist[v] + 1;
			q.push(u);
		}
	}

	return dist;
}

int main(){
	int n, m;

	cin >> n >> m;

	vector<vector<int>> g(n);

	for(int i=0; i<m; i++){
		int u, v;

		cin >> u >> v;

		--u; --v;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<int> dist = bfs(g, 0);

	for(int d : dist){
		cout << d << " ";
	}

	cout << endl;
	return 0;
}
