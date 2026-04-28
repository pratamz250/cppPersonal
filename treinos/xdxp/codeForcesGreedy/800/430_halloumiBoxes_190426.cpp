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
		int n, k, bigger, eq, countk=0, pos=0, reverses;
		cin >> n >> k;

		if(n == 1){
			cout << "YES" << endl;
			continue;
		}

		vll as(n);
		REP(i, 0, n){
			cin >> as[i];
			(i > 0 and as[i-1] < as[i]) ? bigger = 0 : bigger = 1;
			(i > 0 and as[i-1] == as[i]) ? eq = 1 : eq = 0;
			if(i == 1 and as[i-1] >= as[i] and countk <= k){
				pos = i;
				countk++;
				reverses = 1;
			}else if(i > 1 and i > pos and as[i-1] >= as[i] and countk <= k){
				pos = i;
				countk++;
				reverses = 1;
			}
		}
		if(bigger == 0){
			cout << "YES" << endl;
			continue;
		}
		if(eq == 1){
			cout << "YES" << endl;
			continue;
		}
				
	}

	cout << endl;
	return 0;
}
