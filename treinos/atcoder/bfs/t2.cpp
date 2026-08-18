#include <bits/stdc++.h>

using namespace std;

int main(){
	string s = "casa";

	for(size_t i=0; i<s.size(); i++)
		s[i] = 'z';

	cout << s;

	cout << endl;
	return 0;
}
