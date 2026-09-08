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

int solve();
int bfs(int n, int m);

int main(){
	fastIO;

	int t;

	cin >> t;

	while(t--)
		solve();

	cout << bn;
}

int solve(){
	int n, m;
	const int MAX = 10'000'000;

	cin >> n >> m;

	

	return 0;
}

int bfs(int n, int m){
	const int MAX = 10'000'010;
	vector<int> dist(MAX, -1);

	queue<int> q;
	q.push(n);
	dist[n] = 0;

	while(not q.empty()){
		int v = q.front();
		q.pop();

		//gerar vizinhos
	}

	return dist;
}
