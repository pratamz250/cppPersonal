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

	cout << solve();

	cout << bn;
}

int solve(){
	int n, k, ans=0;

	cin >> n >> k;

	vi as(n);
	REP(i, 0, n){
		cin >> as[i];
	}

	if(as[0] == k)
		ans++;

	for(int i=0; i<n-1; i++){
		if(as[i] < k and as[i+1] >= k){
			ans++;
			//cout << "@1" << bn;
		}

		if(as[i] > k and as[i+1] <= k){
			ans++;
			//cout << "@2" << bn;
		}

		/*if(as[i] == k and as[i+1] < k){
			ans++;
			cout << "@3" << bn;
		}*/

		/*if(as[i] == k){
			ans++;
		}*/
	}

	return ans;
}
