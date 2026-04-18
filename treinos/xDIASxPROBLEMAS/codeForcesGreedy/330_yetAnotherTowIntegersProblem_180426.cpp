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
		
	ll t;

	cin >> t;

	while(t--){
		ll a, b;

		cin >> a >> b;

		if(a == b){
			cout << 0 << endl;
			continue;
		}else if(a < 10 and b < 10){
			cout << 1 << endl;
			continue;
		}else if(a > b){
			if(abs((a-b)/10.0 - (a-b)/10) == 0){
				cout << int((a-b)/10)  << endl;
			}else{
				cout << int((a-b)/10) + 1 << endl;
			}
			continue;
		}else if(a < b){
			if(abs((b-a)/10.0 - (b-a)/10) == 0){
				cout << int((b-a)/10) << endl;
			}else{
				cout << int((b-a)/10) + 1 << endl;
			}
			continue;
		}
	}

	//cout << endl;
	return 0;
}
