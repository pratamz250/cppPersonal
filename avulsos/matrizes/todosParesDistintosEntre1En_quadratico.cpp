/*
 * Todos os pares entre 1 e n
 * */

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

int main(){
	fastIO;

	int n, count=0;
	cin >> n;

	REP(i, 1, n+1){
		REP(j, 1, n+1){
			if(j > i){
				cout << i << " " << j << endl;
				count++;
			}
		}
	}
	cout << "Pares: " << count << endl;

	return 0;
}
