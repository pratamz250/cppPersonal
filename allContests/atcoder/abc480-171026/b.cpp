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

	//cout << bn;
}

int solve(){
	int n, m;

	cin >> n >> m;

	vector<string> ss(n), ts(m);
	vi ans(n);

	REP(i, 0, n)
		cin >> ss[i]; //n

	REP(i, 0, m)
		cin >> ts[i]; //m

	//
	REP(i, 0, n)
		cout << ss[i] << " ";
	cout << bn << bn;
	REP(i, 0, m)
		cout << ts[i] << " ";
	cout << bn << bn;
	//

	REP(i, 0, m){
		REP(j, 0, n){
			if(ts[i] == ss[j]){
				ans[j]++;
				//cout << "@" << ts[i] << " " << ss[j] << bn;
			}else{
				//cout << "@@" << ts[i] << " " << ss[j] << bn;
				if(ts[i].size() == ss[j].size()){
					//cout << "@@" << ts[i] << " " << ss[j] << bn;
					string auxt = ts[i];
					string auxs = ss[j];
					cout << "@" << auxt << " " << auxs << bn;
					size_t sizes = auxt.size();
					int count=0;
					for(size_t k=0; k<sizes; k++){
						if(auxt[k] != auxs[k]){
							cout << "@" << auxt[k] << " " << auxs[k] << bn;
							count++;
						}
					}
					cout << count << bn;
					if(count == 1){
						ans[j]++;			
						cout << ss[j] << bn;
					}
					//cout << "@@" << ts[i] << " " << ss[j] << bn;
				}	
			}
		}
	}	

	//cout << bn << bn;
	for(auto e : ans)
		cout << e << bn;

	return 0;
}
