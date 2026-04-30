#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<pair<int, int>> v;

	for(int i=0; i<n; i++){
		int aux;
		cin >> aux;

		v.push_back({aux, i});
	}

	for(int i=0; i<n; i++){
		cout << v[i].first << " " << v[i].second << endl;
	}

	return 0;
}
