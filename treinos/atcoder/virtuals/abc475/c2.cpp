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
vb visited;

int main(){
	fastIO;
		
	solve();		

	cout << bn;
}

int solve(){
	int n, s;
	ll l, countD=0;

	cin >> n >> s >> l;

	visited.resize(n, false);

	vi as(n);
	REP(i, 0, n)
		cin >> as[i];

	while(1){
		int v1 = s - 1;
		int v2 = s + 1;

		if(v1 >= 0 and as[v1-1] < as[v2] and visited[v1] == false){
			countD += as[v1];	
			visited[v1] = true;
			s = v1;
		}
	}	

	return 0;
}

