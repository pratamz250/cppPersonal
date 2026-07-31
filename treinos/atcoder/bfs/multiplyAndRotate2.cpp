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
int bfs(size_t x, size_t a, size_t n);
string rotateString(string s);
size_t sizeVector(size_t n);

int main(){
	fastIO;

	solve();		

	cout << bn;
	return 0;
}

int solve(){
	int a, n;

	cin >> a >> n;

	int x = 1;
	cout << bfs(x, a, n);

	return 0;
}

int bfs(size_t x, size_t a, size_t n){
	size_t MAX = sizeVector(n);
	vector<int> dist(MAX, -1);

	queue<size_t> q;
	q.push(x); 
	dist[x] = 0; 

	while(!q.empty()){
		size_t v = q.front();
		q.pop();

		if(v == n)		
			return dist[v];

		size_t v1 = v * a;
		if(v1 < MAX and dist[v1] == -1){
			dist[v1] = dist[v] + 1;
			q.push(v1);
		}

		if(v >= 10 and v%10 != 0){
			size_t v2 = stoi(rotateString(to_string(v)));
			if(v2 < MAX and dist[v2] == -1){
				dist[v2] = dist[v] + 1;
				q.push(v2);
			}
		}
	}
	return -1;
}

string rotateString(string s){
	if(s.size() == 1 or s.back() == '0')
		return "";

	rotate(s.begin(), s.end() - 1, s.end());

	return s;
}

size_t sizeVector(size_t n){
	int aux = 1;

	for(size_t i=0; i<=to_string(n).size(); i++)
		aux *= 10;

	return aux;
}
