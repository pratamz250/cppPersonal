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
	int n, va, flag=0;
	string x;

	cin >> n >> x;

	if(x[0] == 'A') va = 0;
	else if(x[0] == 'B') va = 1;
	else if(x[0] == 'C') va = 2;
	else if(x[0] == 'D') va = 3;
	else if(x[0] == 'E') va = 4;

	REP(i, 0, n){
		string s;
		cin >> s;
		if(s[va] == 'o') flag = 1;
	}

	cout << (flag == 1 ? "Yes" : "No");

	return 0;
}

int main(){
	fastIO;
		
	solve();

	cout << bn;
	return 0;
}

