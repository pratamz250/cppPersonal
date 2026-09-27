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
	int n, d;

	cin >> n >> d;

	vi xs(n), ans;
	REP(i, 0, n)
		cin >> xs[i];

	sort(xs.begin(), xs.end());
	for(auto e : xs)
		cout << e << " ";
	cout << bn << bn;

	int flag;
	for(int i=0; i<n-1; i++){
		flag = 0;
		for(int j=i+1; j<n; j++){
			if(xs[j] == xs[i]) break;
			cout << i+1 << " " << xs[i] << " " << xs[j] << " -> " << abs(xs[i] - xs[j]) << bn;	
			if(abs(xs[i] - xs[j]) < d){
				flag++;	
				break;
				//cout << "@" << abs(xs[i] - xs[j]) << bn;
			}
		}
		if(flag == 0){
			ans.push_back(i+1);
		}
	}

	sort(ans.begin(), ans.end());
	//cout << bn << bn;
	cout << ans.size() << bn;
	for(auto e : ans)
		cout << e << " ";

	return 0;
}

