//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62 }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int count=0;
		string z;
		cin >> z;

		vector<char> es; //elements
		for(size_t j=0; j<z.size(); j++){
			if(z[j] != '0'){
				count++;
				es.push_back(z[j]);
			}
		}
		cout << count << endl;
		size_t zeros = z.size() - 1;
		for(int k=0; k<count; k++){
			//@1
		}
	}

	cout << endl;
	return 0;
}
