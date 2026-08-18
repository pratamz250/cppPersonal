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
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();
int bfs(int n, int m);

int main(){
	fastIO;
		
	solve();	

	cout << bn;
	return 0;
}

int solve(){
	int n, m;

	cin >> n >> m;

	cout << bfs(n, m);

	return 0;
}

int bfs(int n, int m){
	const int MAX = 20005;
	vi dist(MAX, -1);

	qi q;
	q.push(n);
	dist[n] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		if(v == m)
			return dist[v];

		int v1 = v * 2;
		if(v1 < MAX and dist[v1] == -1){
			dist[v1] = dist[v] + 1;
			q.push(v1);
		}

		int v2 = v - 1;
		if(v2 >= 0 and dist[v2] == -1){
			dist[v2] = dist[v] + 1;
			q.push(v2);
		}
	}
	return -1;
}
