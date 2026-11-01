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
void tosee(const vi &v);

int main(){
	fastIO;

	int t;
	
	cin >> t;

	while(t--)
		solve();

	//cout << bn;
}

int solve(){
	int n, baseCase=0;

	cin >> n;

	vi as(n), checker(n);

	iota(checker.begin(), checker.end(), 1);

	REP(i, 0, n){
		cin >> as[i];
		if(i > 0 and as[i-1] > as[i])
			baseCase++;
	}

	//tosee(as);

	if(as[0] == 1 and as[1] == 1){
		cout << "NO" << bn;
		return 0;
	}

	if(baseCase == 0){
		cout << "YES" << bn;
		return 0;
	}

	REP(i, 1, n){
		int qtde = as[i-1] - i;
		//cout << "@" << as[i-1] << " " << i << " " << qtde << bn;

		as[i-1] = i;
		as[i] += qtde;		
	}

	REP(i, 0, n-1){
		if(as[i] != checker[i]){
			cout << "NO" << bn;
			return 0;
		}
	}

	if(as[n-1] <= as[n-2]){
		cout << "NO" << bn;
		return 0;
	}else{
		cout << "YES" << bn;
		return 0;
	}

	//tosee(as);

	return 0;
}

void tosee(const vi &v){ //Check vector
	for(auto e : v)
		cout << e << " ";

	cout << bn;
}
