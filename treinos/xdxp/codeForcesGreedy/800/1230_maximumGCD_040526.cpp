#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vf = vector<float>;
using vd = vector<double>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){//KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK
	fastIO;
		
	int t;
	cin >> t;

	while(t--){
		ll n/*, ans=0, pos=oo*/;

		cin >> n;

		ll first = floor(n/2);
		//cout << "first: " << first << endl;
		cout << first << endl;

		/*vll ns(n);

		iota(ns.begin(), ns.end(), 1);

		REP(i, 1, n){
			if(ns[i] == first){
				pos = i;
				cout << "@pos: " << pos << endl;
			}

			if(i > pos){
				if(ns[i] % first == 0) ans = max(ans, ns[i]);
				cout << "ans: " << ans << " i: " << i << endl;
			}
		}

		cout << ans << endl;*/
	}

	//cout << endl;
	return 0;
}
