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
		
	int t;
	cin >> t;

	while(t--){
		int n, count=0;
		cin >> n;

		string s;
		cin >> s;

		for(auto e : s) if(e == '.') count++;

		string sub = "...";

		size_t ans = s.find(sub);

		if(ans != string::npos)
			cout << 2 << endl;
		else
			cout << count << endl;
	}

	//cout << endl;
	return 0;
}
