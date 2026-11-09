#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

vi prefixSum(const vi &v);

int main(){
	vi v(100);
	iota(v.begin(), v.end(), 1);

	vi prefs = prefixSum(v);

	for(auto e : prefs)
		cout << e << " ";
	cout << endl;

	cout << "Impares entre INDICES 9 e 45: " << prefs[45 + 1] - prefs[9] << " (corresponde a [10, 46]" << endl;
	cout << "Impares entre os NUMEROS 9 e 45: " << prefs[44 + 1] - prefs[8] << endl;
	cout << "Impares entre os numeros 1 e 10: " << prefs[9] - prefs[0] << endl;

	cout << endl;
	return 0;	
}

vi prefixSum(const vi &v){
	vi pref(v.size()+1, 0);

	for(size_t i=0; i<v.size(); i++)
		pref[i+1] = pref[i] + (v[i] & 1);

	return pref;
}

