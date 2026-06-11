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
	int n, k, sum=0, ans=0;

	cin >> n >> k;

	REP(i, 1, n+1){
		sum += (5*i);
		if(sum + k > 240) break;
		ans++;
	}

	cout << ans;
}

int main(){
	fastIO;
		
	solve();		

	cout << bn;
	return 0;
}

