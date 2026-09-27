#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t;

	cin >> s >> t;

	size_t pos = s.find(t);

	if(pos != string::npos)
		cout << "Yes";
	else
		cout << "No";

	cout << endl;
	return 0;
}
