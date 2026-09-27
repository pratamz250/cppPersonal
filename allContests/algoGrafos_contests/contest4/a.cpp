#include <bits/stdc++.h>

#define bn '\n'

using namespace std;

int bfs(int n, int k);
int solve();

int main(){
	int t;

	cin >> t;

	while(t--)
		cout << solve() << endl;

	//cout << endl;
	return 0;
}

int solve(){
	int n, k;

	cin >> n >> k;

	return bfs(n, k);
}

int bfs(int n, int k){
	unordered_map<int, int> dist;

	queue<int> q;
	q.push(n);
	dist[n] = 0;

	while(not q.empty()){
		int v = q.front();
		q.pop();

		if(v == k)
			return dist[v];

		int v1 = v/2; //chao

		if(dist.find(v1) == dist.end()){
			dist[v1] = dist[v] + 1;
			q.push(v1);
		}

		int v2 = (v+1)/2; //teto

		if(dist.find(v2) == dist.end()){
			dist[v2] = dist[v] + 1;
			q.push(v2);
		}
	}

	return -1;
}
