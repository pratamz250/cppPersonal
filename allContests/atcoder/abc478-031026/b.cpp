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

	cout << bn;
}

int solve(){
	int n, v, count=0, flag=0, ans=0;

	cin >> n >> v;

	vector<pair<int, int>> ws(n);
	REP(i, 0, n){
		int aux;
		cin >> aux;
		ws[i].first = aux;
		ws[i].second = i+1;
	}

	REP(i, 0, n)
		cout << ws[i].first << " " << ws[i].second << bn;
	cout << bn;

	sort(ws.rbegin(), ws.rend());

	REP(i, 0, n)
		cout << ws[i].first << " " << ws[i].second << bn;
	cout << bn;

	REP(i, 0, n){
		cout << ws[i].first << " " << ws[i].second << bn;

		if(count + ws[i].second <= v){
			count += ws[i].second;
			ans += ws[i].first;
			flag++;
			//cout << "@" << ws[i].second << bn;
		}

		if(count >= v and flag < 3){
			ans -= ws[i].first;	
			count -= ws[i].second;
		}

		if(flag == 3) break;
	}

	cout << bn << "@" << count << bn << ans << bn;

	return 0;
}
