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
	//fastIO;

	int n, p, q, aux;
	set<int> levels;

	cin >> n;

	cin >> p;
	REP(j, 0, p){
		cin >> aux;
		levels.insert(aux);
	}

	cin >> q;
	REP(k, 0, q){
		cin >> aux;
		levels.insert(aux);
	}

	*levels.end() == n ? cout << "I become the guy." : cout << "Oh, my keyboard!";

	cout << endl;
	return 0;
}
