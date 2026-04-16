#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> n = {19, 2, 3, 4, 5, 6};

	int s = *n.begin() + *(n.end() - 1);

	cout << (*n.begin() > *(n.end() - 1) ? "b" : "e") << endl;

	n.erase(n.end() - 1);

	for(size_t i=0; i<n.size(); i++){
		cout << n[i] << " ";
	}

	cout << endl << s << endl;

	return 0;
}
