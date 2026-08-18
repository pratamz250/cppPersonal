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

	cout << solve();		

	cout << bn;
	return 0;
}

int solve(){
	int n, ans=0;
	string s;

	cin >> n >> s;

	if(n == 1 and s[0] == 'x')
		return 1;

	for(int i=1; i<n-1; i++){
		if(s[i] == 'x' and s[i+1] == 'x' and s[i-1] == 'x')
			ans++;
	}

	if(s[0] == 'x' and s[1] == 'x'){
		ans++;
	}

	if(s[n-1] == 'x' and s[n-2] == 'x'){
		ans++;
	}

	return ans;
}
