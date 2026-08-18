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
}

int solve(){
	int n, t;

	cin >> n;
	t = n+1;

	vi v(n+2);

	for(int i=2; i<n+2; i++){
		if(i+i <= t){
			v[i]++;
		}else{
			v[i]++;
		}
	}

	for(auto e : v)
		cout << e << " ";

	return 0;
}

