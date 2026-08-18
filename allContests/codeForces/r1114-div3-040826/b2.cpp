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
char menorHistograma(const string &s);

int main(){
	fastIO;
		
	int t;

	cin >> t;

	while(t--)
		solve();

	cout << bn;
}

int solve(){
	int n, flag=0;
	string s, aux;
	char target=' ';

	cin >> n >> s;

	set<char> conj;

	for(size_t i=1; i<s.size()-1; i++){
		conj.insert(s[i]);
		aux += s[i];
	}

 	target = menorHistograma(aux);	

	//cout << aux << " " << aux.size() << " " << conj.size() << bn;

	for(auto e : aux){
		if(flag == 0 or e != target)
			cout << e;
		if(e == target)
			flag = 1;
	}

	cout << bn;
	return 0;
}

char menorHistograma(const string &s){
	map<char, int> h;
	int menor = 1000000;
	char c = ' ';

	for(auto e : s)
		++h[e];

	for(auto e : h)
		menor = min(menor, e.second);	

	for(auto e : h)
		if(e.second == menor)	
			c = e.first;

	return c;
}
