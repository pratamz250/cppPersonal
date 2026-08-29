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
	int n;
	int ans=0;

	cin >> n;

	vi as(n), bs(n);
	REP(i, 0, n){
		cin >> as[i];
		bs[i] = as[i];
	}

	sort(as.begin(), as.end());
	sort(bs.begin(), bs.end());

	REP(i, 0, n){
		REP(j, i+1, n){
			if(i == 0 and as[i] == bs[j]){
				bs[j] = -1;	
				bs[i] = -1;
			}
			if(i > 0 and as[i] != as[i-1] and as[i] == bs[j]){
				bs[j] = -1;	
				bs[i] = -1;
				break;
			}		
		}
	}		

	for(auto e : bs)
		if(e != -1)
			ans += e;

	return ans;
}

