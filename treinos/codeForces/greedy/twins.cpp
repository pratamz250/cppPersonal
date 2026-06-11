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

void solve(){
	int n, sum=0, currentSum=0;
	
	cin >> n;

	vi as(n);
	REP(i, 0, n){
		cin >> as[i];
		sum += as[i];
	}

	sort(as.begin(), as.end(), greater<int>());

	REP(i, 0, n){
		currentSum += as[i];	
		if(currentSum > sum/2.0){
			cout << i+1;
			break;
		}
	}
}

int main(){
	fastIO;
		
	solve();

	cout << bn;
	return 0;
}

