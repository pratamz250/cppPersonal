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

	//cout << bn;
	return 0;
}

int solve(){
	int y, chave=0;
	map<int, int> ns;
	vi ans;

	cin >> y;

	REP(i, 1000, 10000){
		int u, d, c, m;

		u = i % 10;
		d = (i % 100)/10;
		c = (i % 1000)/100;
		m = i/1000;

		vi aux;
		aux.push_back(u);
		aux.push_back(d);
		aux.push_back(c);
		aux.push_back(m);

		sort(aux.begin(), aux.end());

		int count=0;
		for(size_t j=0; j<aux.size(); j++)
			if(j > 0 and aux[j-1] < aux[j])
				count++;

		count++;

		if(count == 4){
			ns.insert(make_pair(i, chave));
			ans.push_back(i);
			chave++;
		}
	}

	if(ns[y] != 0){
		cout << ans[ns[y] + 1] << bn;
	}else if(ns[y] == 0){
		for(auto e : ans){
			if(e > y){
				cout << e << bn;
				break;
			}
		}
	}
	
	return 0;
}

