#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int, int>> v;

	for(size_t i=0; i<5; i++){
		v.push_back({0, 0});
	}


	for(size_t i=0; i<5; i++){
		cout << v[i].first << " " << v[i].second << endl;	
	}
	cout << endl;
	return 0;
}
