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

int main(){
	fastIO;
		
	int t;
	cin >> t;

	while(t--)
		solve();

	cout << bn;
	return 0;
}

int solve(){
	int n, m;

	cin >> n >> m;

	if(n < m){
		cout << "NO" << bn;
		return -1;
	}

	vi a(n), b(m), ans;

	REP(i, 0, n)
		cin >> a[i];

	REP(i, 0, m)
		cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for(int i=0, j=m-1; i<j; i++, j--){
		if(i == m-1)
			break;

		if(a[i] <= b[i] and a[j] >= b[i]){
			ans.push_back(b[i]);	
			//cout << b[i] << bn;
		}
	}

	for(auto e : ans)
		cout << e << " ";

	cout << bn;

	return 0;
}

