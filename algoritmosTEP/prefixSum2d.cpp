#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;

	cin >> n >> m;

	vector<vector<int>> v(n, vector<int>(m));
	vector<vector<int>> pref(n+1, vector<int>(m+1));

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> v[i][j];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			pref[i+1][j+1] = 
				v[i][j]
				+ pref[i+1][j]
				+ pref[i][j+1]
				- pref[i][j];

	for(int i=0; i<n+1; i++){
		for(int j=0; j<m+1; j++){
			cout << pref[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
	//2 2 
	int ans = pref[3][3]
			- pref[3][2]
			- pref[2][3]
			+ pref[2][2];
	cout << ans << endl;

	return 0;
}
