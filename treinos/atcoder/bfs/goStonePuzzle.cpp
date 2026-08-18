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
int bfs(const vi &ns, int init, int target);
vi neighboring(string s);
string translating(string s);

int main(){
	fastIO;

	solve();		

	cout << bn;
}

int solve(){
	int n, init, target;
	string s, t;

	cin >> n >> s >> t;

	vi ns = neighboring(s);
	init = stoi(translating(s));
	target = stoi(translating(t));

	cout << bfs(ns, init, target);

	return 0;
}

int bfs(const vi &ns, int init, int target){
	const int MAX = target + target;
	vi dist(MAX, -1);

	qi q;
	q.push(init);
	dist[init] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		if(v == target)
			return dist[v];

		for(auto e : ns){
			if(dist[e] == -1){
				dist[e] = dist[v] + 1;
				q.push(e);
			}
		}
	}
	return -1;
}

vi neighboring(string s){
	char c1, c2;
	vi ns; //neighbors

	for(size_t i=0; i<s.size(); i++){ //translating
		if(s[i] == 'B')
			s[i] = '1';
		if(s[i] == 'W')
			s[i] = '2';
	}

	for(size_t i=0; i<s.size(); i++){ //creating neighbors
		string aux = s;
		if(i > 0){
			c1 = s[i-1];
			c2 = s[i];

			aux[i-1] = '3';
			aux[i] = '3';

			aux += c1;
			aux += c2;

			ns.push_back(stoi(aux));		
		}	
	}		

	return ns;
}

string translating(string s){
	string ans = s;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] == 'B')
			ans[i] = '1';
		if(s[i] == 'W')
			ans[i] = '2';
	}

	ans += '3';
	ans += '3';

	return ans;
}
