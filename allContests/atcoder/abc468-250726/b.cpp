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

int solve();

int main(){
	fastIO;

	solve();		

	cout << bn;
	return 0;
}

int solve(){
	int m, d, flag=0, count=0;
	vi p, g; //ponto e letra 'g' (posicoes)

	cin >> m >> d;

	vc ss(m);

	REP(i, 0, m){
		cin >> ss[i];

		if(ss[i] == 'G'){
			flag++;
			g.push_back(i);
		}else{
			p.push_back(i);
		}
	}

	if(flag == 0){
		cout << m;
		return 1;
	}

	for(size_t i=0; i<p.size(); i++){
		size_t notG=0;
		for(size_t j=0; j<g.size(); j++){
			if(abs(p[i] - g[j]) > d){
				notG++;
			}
		}
		if(notG == g.size())
			count++;
	}	

	cout << count;

	return 0;
}
