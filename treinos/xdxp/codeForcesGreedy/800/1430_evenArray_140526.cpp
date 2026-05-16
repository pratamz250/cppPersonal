#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define bn "\n"

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
		int n, target=0, zeros=0; 

		cin >> n;

		vi as(n);
		REP(i, 0, n){
			cin >> as[i];
			if(i % 2 != as[i] % 2)
				target++; 

			if(as[i] == 0) zeros++;
		}

		if(zeros == n and n > 1){
			cout << -1 << bn;
			continue;
		}else if(target == 0){
			//cout << "1@";
			cout << 0 << bn;
			continue;
		}else if(target == 1 and n > 1){ //caso base 
			//cout << "2@";
			cout << 1 << bn;
			continue;
		}else if(target == 1 and n == 1){
			//cout << "3@";
			cout << -1 << bn;
			continue;
		}else if(not(target & 1)){ //par 
			//cout << "4@";
			cout << target / 2 << bn;
			continue;
		}else if(target & 1 and target > 1){ //impar
			//cout << "5@";
			cout << -1 << bn;
			continue;
		}
	}

	//cout << bn;
	return 0;
}

