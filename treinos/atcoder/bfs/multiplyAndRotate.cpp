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
int bfs(string sa, string sn);
string stuff(string s);

int main(){
	fastIO;
		
	solve();		

	cout << bn;
	return 0;
}

int solve(){
	string sa, sn;

	cin >> sa >> sn;

	cout << bfs(sa, sn);

	return 0;
}

int bfs(string sa, string sn){
	const int MAX = 2000;
	vi dist(MAX, -1);

	int a = stoi(sa);
	int x = 1;

	qi q;
	q.push(x);
	dist[x] = 0;

	while(!q.empty()){
		int v = q.front();
		q.pop();

		if(v == stoi(sn))
			return dist[v];

		int mu; //multiply
		mu = v * a;
		if(dist[mu] == -1){
			dist[mu] = dist[v] + 1;
			q.push(mu);
		}

		int ru; //rotate
		ru = stoi(stuff(to_string(v)));
		if(dist[ru] == -1){
			dist[ru] = dist[v] + 1;
			q.push(ru);
		}
	}
	return -1;
}

string stuff(string s){
	rotate(s.begin(), s.end() - 1, s.end());

	return s;
}
