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
int bfs(int a, int pos, int n, const vi &as);

int main(){
	fastIO;
		
	solve();		

	cout << bn;
}

int solve(){
	int n;

	cin >> n;

	vi as(n), ans;

	REP(i, 0, n)
		cin >> as[i];

	REP(i, 0, n){
		ans[i] = bfs(as[i], i, n, as);
	}

	for(auto e : ans)
		cout << e << " ";

	return 0;
}

int bfs(int a, int pos, int n, const vi &as){
	const int MAX = 200500;
	vi dist(MAX, -1); //@

	qi q;
	q.push(a);
	dist[a] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		int v1 = pos - v;
		if(1 <= pos - v){
			
		}

		int v2 = pos + v;
		if(pos + v <= n){
			if(as[v2] % 2 != a % 2){
				dist[v2] = dist[v] + 1;
				return dist[v2];
			}else if(as[v2] % 2 == a % 2){
				do{
					pos = v2;

				}
			}
		}
	}
	return -1;
}
