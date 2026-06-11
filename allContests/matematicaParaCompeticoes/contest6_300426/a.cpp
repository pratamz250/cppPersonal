#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){
	fastIO;

	int t;
	cin >> t;

	while(t--){
		int times=1;
		ll n, m;
		double ans=0.0;

		cin >> n >> m;

		vll as(n);
		REP(i, 0, n) cin >> as[i];

		sort(as.begin(), as.end());
		REP(i, 0, n) cout << as[i] << " ";

		//cout << endl << endl;
		REP(i, 0, n){
			ans += (float)(as[i] * times)/(i+1);	
			times++;
		}

		cout << (ans == m ? "YES" : "NO") << endl;
	}

	//cout << endl;
	return 0;
}

