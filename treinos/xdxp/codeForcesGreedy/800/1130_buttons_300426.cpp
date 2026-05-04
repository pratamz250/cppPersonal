#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	int t;

	cin >> t;

	while(t--){
		vector<long long> bs(3);
		int a=0, b=0; //Anna e Katie in C button

		for(int i=0; i<3; i++) cin >> bs[i];

		bs[2] & 1 ? a = 1 : b = 1;
		
		if(bs[0] == bs[1] and a == 1){
			cout << "First" << endl;
			continue;
		}else if(bs[0] == bs[1] and b == 1){
			cout << "Second" << endl;
			continue;
		}else if(bs[0] > bs[1]){
			cout << "First" << endl;
			continue;
		}else if(bs[0] < bs[1]){
			cout << "Second" << endl;
			continue;
		}
	}

	return 0;
}
