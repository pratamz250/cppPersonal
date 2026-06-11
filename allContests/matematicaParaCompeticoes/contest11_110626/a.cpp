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
	int n, d, allBigger=0, lessEqual=0;
	ll sum=oo; 

	cin >> n >> d;

	vll as(n), ans(n);

	REP(i, 0, n){
		cin >> as[i];
		if(as[i] > d) allBigger++;
		else lessEqual++;
	}

	//REP(i, 0, n) cout << as[i] << " ";

	if(allBigger == n){
		cout << "NO" << bn;
		return 1;
	}else if(lessEqual == n){
		cout << "YES" << bn;
		return 0;
	}

	REP(i, 0, n){
		int flag = i;
		int current = flag+1;
		REP(j, 0, n){
			if(j != flag and j != current){
				sum = min(sum, as[current] + as[j]);	
			}
		}
		ans[i] = sum;
	}

	/*cout << bn << bn;
	REP(i, 0, n)
		cout << as[i] << " ";*/
		
	return 0;	
}

int main(){ //Revisar
	fastIO;
		
	int t;
	cin >> t;

	while(t--) solve();

	cout << bn;
	return 0;
}

