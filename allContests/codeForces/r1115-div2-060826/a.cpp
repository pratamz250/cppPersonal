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
		cout << solve() << bn;

	//cout << bn;
}

int solve(){
	int n, ans=0;

	cin >> n;

	vi as(n);

	REP(i, 0, n)
		cin >> as[i];

	if(n == 1)
		return as[0];

	sort(as.begin(), as.end());
	/*for(auto e : as)
		cout << e << " ";*/

	for(int i=0, j=n-1; i<j; i++, j--){
		if(as[i] == as[j]){
			ans += as[i];
			ans += as[j];
			break;
		}
		ans += as[j];
		ans += as[i];
	}

	if(n % 2 != 0){
		ans += as[n/2];
	}

	//cout << bn;

	return ans;
}

