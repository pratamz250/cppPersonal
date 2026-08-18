#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int>> m(3, vector<int>(3, 1));

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << m[i][j];
		}
		cout << endl;
	}

	return 0;
}
