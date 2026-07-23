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
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();
int bfs(int s, int m);

int main(){
	fastIO;
		
	solve();	

	cout << bn;
	return 0;
}

int solve(){
	int n, m;

	cin >> n >> m; //bfs comeca em n e termina em m

	cout << bfs(n, m);

	return 0;
}

int bfs(int s, int m){
	const int MAX = 20005;
	vector<int> dist(MAX, -1);

	queue<int> q;
	q.push(s);
	dist[s] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		if(v == m) 
			return dist[v];

		int u = v - 1;
		if(u >= 0 and dist[u] == -1){
			dist[u] = dist[v] + 1;
			q.push(u);
		}

		u = 2 * v;
		if(u < MAX and dist[u] == -1){
			dist[u] = dist[v] + 1;
			q.push(u);
		}

	}

	return -1;
}
