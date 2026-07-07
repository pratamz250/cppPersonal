#include <iostream>
//#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	int h, w, q;
	cin >> h >> w >> q;

	for(int i=0; i<q; i++){
		int type, quant;
		cin >> type >> quant;

		if(type == 1){
			h -= quant;
			cout << w*quant << endl;
		}else if(type == 2){
			w -= quant;
			cout << h*quant << endl;
		}
	}

	cout << endl;
	return 0;
}
