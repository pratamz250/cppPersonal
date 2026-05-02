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
	//fastIO;
		
	vector<vector<int>> v(3, vector<int>(3));
	int four=0, five=0, six=0, line=0;

	REP(i, 0, 3){
		REP(j, 0, 6){
			cin >> v[i][j];
			if(v[i][j] == 4 and line == 0) four++;
			if(v[i][j] == 5 and line == 1) five++;
			if(v[i][j] == 6 and line == 2) six++;
		}
		line++;
	}

	cout << (four * five * six)/36.0;

	cout << endl;
	return 0;
}
