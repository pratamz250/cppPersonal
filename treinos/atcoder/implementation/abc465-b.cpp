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
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve(){
	int x, y, l, r, a, b, ans=0;
	vi hs(23);

	iota(hs.begin(), hs.end(), 1);

	cin >> x >> y >> l >> r >> a >> b;

	for(int i=hs[a-2]; i%23; i++){
		if(hs[i] >= l and hs[i] < r){
			ans += x;
		}else{
			ans += y;
		}

		if(hs[i] == b-1){
			break;
		}
	}

	return ans;
}

int main(){
	fastIO;
		
	cout << solve();		

	cout << bn;
	return 0;
}

