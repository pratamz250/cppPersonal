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
using vb = vector<bool>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();

int main(){
	fastIO;
		
	solve();		

	cout << bn;
}

int solve(){
	int n;

	cin >> n;

	vi as(n);
	REP(i, 0, n)
		cin >> as[i];

	int c=0, f=n-1; //comeco e fim
	int sumc=0, sumf=0; //soma comeco e fim

	sumc += as[c];
	sumf += as[f];
	//c++; f--;
	while(1){
		if(sumc < sumf){
			c++;
			sumc += as[c];		
		}else{
			f--;
			sumf += as[f];
		}
		//cout << sumc << " " << sumf << bn;

		if(c == f or c == f-1)
			break;
	}

	cout << abs(sumc - sumf);

	return 0;
}

