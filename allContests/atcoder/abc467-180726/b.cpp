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
	int n, x=10000, y=10000;

	cin >> n;

	while(n--){
		int a, b;
		string s;

		cin >> a >> b >> s;

		if(s == "take")
			x -= b - a;

		y -= b - a;
	}	

	return abs(y - x);
}

int main(){
	fastIO;
		
	cout << solve();

	cout << bn;
	return 0;
}

