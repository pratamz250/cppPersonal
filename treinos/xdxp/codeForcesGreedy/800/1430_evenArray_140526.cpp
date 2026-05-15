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
using vc = vector<char>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){
	fastIO;

	int t;
	cin >> t;

	while(t--){
		int n, target=0; 

		cin >> n;
		if(n == 1){
			cout << -1 << "\n";
			continue;
		}

		vi as(n);
		REP(i, 0, n){
			cin >> as[i];
			if(i % 2 != as[i] % 2)
				target++; 

			cout << i << " " << as[i] << "\n";
		}
		//cout << "target: " << target << "\n";
		if(target == 0){
			cout << 0 << "\n";
			continue;
		}else if(target == 1){ //caso base 
			cout << 1 << "\n";
			continue;
		}else if(not(target & 1)){ //par 
			cout << target / 2 << "\n";
			continue;
		}else if(target & 1 and target != 0){ //impar
			cout << -1 << "\n";
			continue;
		}
	}

	//cout << "\n";
	return 0;
}

