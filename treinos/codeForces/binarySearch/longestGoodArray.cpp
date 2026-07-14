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
	ll a, b;
	int count=1;

	cin >> a >> b;

	int m = a + (b-a)/2;

	while(1){
		if(m - (m-1) < (m+1) - m){
			count++;
		}
		:wq
	}

	return 0;
}

int main(){
	fastIO;
		
	int t;
	cin >> t;

	while(t--)
		solve();

	cout << bn;
	return 0;
}

