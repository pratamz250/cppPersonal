#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	ll q=0, quant=0;
	cin >> q;
	vector<ll> hs;

	for(ll i=0; i<q; i++){
		ll op, h;
		cin >> op >> h;

		hs.push_back(h);
		sort(hs.begin(), hs.end());
		if(op == 1){
			quant++;	
			cout << quant << endl;
		}else if(quant > 0){
			//binarysearch(hs.begin(), hs.end(), h);
			auto it = lower_bound(hs.begin(), hs.end(), h);
			//if(it != hs.end() and *it == h){
				ll index = distance(hs.begin(), it);
			//}
			quant = quant - (index+1);
			cout << quant << endl;
		}
	}

	//cout << endl;
	return 0;
}
