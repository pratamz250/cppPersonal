#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> a = {1, 2, 3, 4, 5};

	for(int i=0, j=4; i<j; i++, j--)
		cout << a[i] << " " << a[j] << endl;

	cout << endl;
	return 0;
}
