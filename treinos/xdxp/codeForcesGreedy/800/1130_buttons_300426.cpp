#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	int t;

	cin >> t;

	while(t--){
		vector<long long> bs(3);

		for(int i=0; i<3; i++) cin >> bs[i];

		if(bs[2] == 1){
			bs[0] -= bs[2];
		}else if(bs[2] & 1){  //impar 
			bs[1] -= (bs[2] - 1)/2; //Katie
			bs[0] -= ((bs[2] - 1)/2) - bs[2]; //Anna
		}else if(!(bs[2] & 1)){ //par
			long long aux = bs[2] / 2;
			bs[0] -= aux;
			bs[1] -= aux;
		}

		cout << (bs[0] > bs[1] ? "Second" : "First") << endl;
	}

	return 0;
}
