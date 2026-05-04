/*
 * Todos os pares distintos entre 1 e n - terminar depois
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
		
	int n, i=0, p1=1, p2=2, count=0, stop=0;

	cin >> n;

	while(1){
		cout << p1 << " " << p2 << endl;

		if(i == n){
			p1++;
			i = p1+1;
		}

		i++;
		p2++;
		count++;

		if(count == n-1) break;
		stop++;
		if(stop == 50) break;
	}

	cout << endl;
	return 0;
}
