#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int>> m(3, vector<int>(3));

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> m[i][j];
			cout << (m[i][j] & 2 ? "impar" : "par") << endl;
		}
	}

	cout << endl;
	return 0;
}
