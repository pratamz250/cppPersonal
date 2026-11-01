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

	int t;

	cin >> t;

	while(t--)
		cout << solve() << bn;

	//cout << bn;
}

int solve(){
	int n, count=0, ans;
	string s;
	vi cs; //characteres

	cin >> n >> s;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] == '#')
			count++;

		if(s[i] == '*'){
			cs.push_back(count);
			count = 0;
		}
	}
	cs.push_back(count);

	sort(cs.rbegin(), cs.rend());

	ans = (cs[0] & 1 ? (cs[0] / 2) + 1 : cs[0] / 2);

	return ans;
}
