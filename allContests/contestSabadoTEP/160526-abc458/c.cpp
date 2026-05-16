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

int main(){
	fastIO;
		
	int count=0;
	string s;

	cin >> s;

	for(size_t i=0; i<s.size(); i++){
		string aux;

		for(size_t j=0; j<=i; j++)
			aux.push_back(s[j]);

		cout << "string: " << aux << bn;
		if(aux[(aux.size() + 1)/2] == 'c') count++;
		cout << "@" << aux[(aux.size() + 1)/2] << bn;
	}

	cout << count;

	cout << bn;
	return 0;
}
