#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d;

	cin >> n >> d;

	map<int, int> xs(n);
	for(int i=0; i<n; i++){
		int aux;
		cin >> aux;
		xs.first = aux;
		xs.second = i+1;
	}

	for(const auto &e: xs)
		cout << e.first << " " << e.second;

	cout << endl;
	return 0;
}
