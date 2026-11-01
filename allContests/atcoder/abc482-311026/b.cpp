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
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using qi = queue<int>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int solve();
void tosee(const vi &v);
int prefixSum(const string &s);

int main(){
	fastIO;

	cout << solve();

	cout << bn;
}

int solve(){
	string s1, s2, s3, s4, s5, sD;
	int countD=0, countH=0;
	vi countV, vls;
	vs ss;

	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	ss.push_back(s1); ss.push_back(s2); ss.push_back(s3); ss.push_back(s4); ss.push_back(s5);
	//cout << s1 << bn << s2 << bn << s3 << bn << s4 << bn << s5 << bn;

	//check vertical
	REP(i, 0, 5){
		int aux=0;
		if(s1[i] == 'o') aux++;
		if(s2[i] == 'o') aux++;
		if(s3[i] == 'o') aux++;
		if(s4[i] == 'o') aux++;
		if(s5[i] == 'o') aux++;
		countV.push_back(aux);
	}
	sort(countV.rbegin(), countV.rend());
	/*cout << "CounV: " << bn;
	for(auto e : countV)
		cout << e << " ";
	cout << bn;*/

	//check diagonal
	sD.push_back(s1[0]);
	sD.push_back(s2[1]);
	sD.push_back(s3[2]);
	sD.push_back(s4[3]);
	sD.push_back(s5[4]);
	countD = prefixSum(sD);

	//check horizontal
	for(int i=0; i<5; i++){
		int aux = prefixSum(ss[i]);
		//cout << "@" << aux << bn;
		countH = max(aux, countH);
		//cout << bn;
	}

	//cout << countV[0] << bn;
	//cout << "coutnD: " << countD << bn;
	//cout << countH << bn;

	//ans
	/*if(countV[0] == 1 or countD == 1){
		//cout << "1@" << bn;
		return 0;
	}*/
	vls.push_back(countV[0]);
	vls.push_back(countD);
	vls.push_back(countH);

	sort(vls.rbegin(), vls.rend());
	/*for(auto e : vls)
		cout << e << " ";
	cout << bn;*/

	//cout << "2@" << bn;
	//cout << vls[0] << bn;
	return abs(vls[0] - 5);
}

void tosee(const vi &v){
	for(auto e : v)	
		cout << e << " ";

	cout << bn;
}

int prefixSum(const string &s){
	vi pref(s.size() + 1);

	for(size_t i=0; i<s.size(); i++){
		pref[i+1] = pref[i] + (s[i] == 'o');
	}

	/*for(auto e : pref)
		cout << e << " ";*/

	return abs(pref[0] - pref[5]);
}
