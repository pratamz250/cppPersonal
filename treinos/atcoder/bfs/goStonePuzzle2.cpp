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
vi bfs(const vvi &g, int s);

int main(){
	fastIO;
		
	solve();		

	cout << bn;
}

int solve(){
	int n;
	string s, t;

	cin >> n >> s >> t;

	s += '.';
	s += '.';

	t += '.';
	t += '.';

	cout << s << " " << t;

	return 0;
}

vi neighbors(string s){
	int n = s.size(), p1=0, p2=0, flag=0;
	vi esq, dir;
	vector<string> ns;

	for(int i=0; i<n; i++){ //positions of points
		if(s[i] == '.' and flag == 0){
			p1 = i;
			flag = 1;
		}

		if(s[i] == '.' and flag == 1){
			p2 = i;
			flag = 2;
		}
	}

	for(int i=1; i<n; i++){ //all possible adjacent positions
		if(s[i-1] != '.' and s[i] != '.'){
			esq.push_back(i-1);
			dir.push_back(i);
		}
	}

	for(size_t i=0; i<esq.size(); i++){
		string aux(n);
		for(int j=0; j<n-1; j++){
			
		}
	}		

}

vi bfs(const vvi &g, int s){
	vi dist(g.size(), -1);

	qi q;
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
