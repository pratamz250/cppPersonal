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
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();

int main(){
	fastIO;
	int t;

	cin >> t;
		
	while(t--)
		solve();

	//cout << bn;
	return 0;
}

int solve(){
	string s;
	size_t pa=0, pb=0;
	int countA=0, countB=0;

	cin >> s;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] == '0' and countA == 0){
			pa = i;
			countA++;
		}
		if(s[i] == '1' and countB == 0){
			pb = i;
			countB++;
		}
	}

	for(size_t i=0; i<s.size(); i++){
		if(i != pa and i != pb){
			cout << s[i];
		}
	}
	cout << bn;

	return 0;
}
