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
	fastIO;
		
	int n, countP=0, countM=0, countPE=0;
	vector<pair<int, int>> vP, vM, vPE;

	cin >> n;

	vi ts(n);

	REP(i, 0, n){
		cin >> ts[i];

		if(ts[i] == 1){
			countP++;
			vP.push_back({1, i+1});
		}else if(ts[i] == 2){
			countM++;
			vM.push_back({2, i+1});
		}else{
			countPE++;
			vPE.push_back({3, i+1});
		}
	}
	
	int m = min(countP, (min(countM, countPE)));
	cout << m << endl;

	REP(i, 0, m)
		cout << vP[i].second << " " << vM[i].second << " " << vPE[i].second << endl;

	//cout << endl;
	return 0;
}
