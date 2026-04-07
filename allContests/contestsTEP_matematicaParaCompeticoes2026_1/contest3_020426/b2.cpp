#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){
	fastIO;
		
	ll n, m, q=1, count=0;
	vl ans;
	cin >> n >> m;

	n = pow(2, n);
	cout << n << endl; //Ok, nao sei como resolver a exponenciacao!

	while(m - n*q >= 0){
		ans.push_back(m - n*q);
		q++;
		//cout << m - n*q << endl;
		//count++;
		if(count == 10){
			cout << "@";
			exit(1);
		}
	}

	sort(ans.begin(), ans.end());
	cout << ans[0];

	/*for(size_t i=0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}*/

	cout << endl;
	return 0;
}

