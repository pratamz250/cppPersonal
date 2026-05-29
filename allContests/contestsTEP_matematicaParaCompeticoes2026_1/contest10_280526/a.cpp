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

void solve(){
	ll a, b, c, ans=0;

	cin >> a >> b >> c;

	if(a == b){
		ans += abs(a - b);
		//cout << ans << bn;
		//cout << a << " " << b << " @1 " << ans << bn;
	}else if(a < b){
		ans += abs((a + 1) - (b - 1));	
		//cout << ans << bn;
		//cout << a << " " << b << " @2 " << ans << bn;
	}else if(a > b){
		ans += abs((a - 1) - (b + 1));
		//cout << ans << bn;
		//cout << a << " " << b << " @3 " << ans << bn;
	}

	if(a == c){
		ans += abs(a - c);
		//cout << ans << bn;
		//cout << a << " " << c << " @4 " << ans << bn;
	}else if(a < c){
		ans += abs((a + 1) - (c - 1));
		//cout << a << " " << c << " " << ans << bn;
		//cout << a << " " << c << " @5 " << ans << bn;
	}else if(a > c){
		ans += abs((a - 1) - (c + 1));
		//cout << ans << bn;
		//cout << a << " " << c << " @6 " << ans << bn;
	}

	if(b == c){
		ans += abs(b - c);
		//cout << ans << bn;
		//cout << b << " " << c << " @7 " << ans << bn;
	}else if(b < c){
		ans += abs((b + 1) - (c - 1));
		//cout << ans << bn;
		//cout << b << " " << c << " @8 " << ans << bn;
	}else if(b > c){
		ans += abs((b - 1) - (c + 1));
		//cout << ans << bn;
		//cout << b << " " << c << " @9 " << ans << bn;
	}

	cout << ans << bn;
}

int main(){
	fastIO;

	int q;
	cin >> q;

	while(q--) solve();

	//cout << bn;
	return 0;
}


