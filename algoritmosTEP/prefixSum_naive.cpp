#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> a = {3, 1, 4, 1, 5};
	vector<int> pref(a.size() + 1);

	for(size_t i=0; i<a.size(); i++){
		pref[i+1] = pref[i] + a[i];
	}

	for(auto e : pref)
		cout << e << " ";

	int sum = abs(pref[2] - pref[5]); //soma de 2 a 3
	cout << endl << sum;
	
	cout << endl;
	return 0;
}
