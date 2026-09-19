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

int main(){
	fastIO;
		
	solve();		

	//cout << bn;
}

int solve(){
	int n;
	
	cin >> n;

	vi as(n);
	REP(i, 0, n)
		cin >> as[i];

	vi m(4);

	/*m.push_back(as[0]);
	m.push_back(as[1]);
	m.push_back(as[2]);
	m.push_back(as[3]);*/

	m[0] = as[0];
	m[1] = as[1];
	m[2] = as[2];
	m[3] = -1;
	
	sort(m.rbegin(), m.rend());
	cout << m[2] << bn;

	for(int i=3; i<n; i++){
		m[3] = as[i];
		sort(m.rbegin(), m.rend());
		cout << m[2] << bn;
	}

	return 0;
}

