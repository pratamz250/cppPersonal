#include <iostream>
//#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	ll n, k, ate=0, count=0;

	cin >> n >> k;

	while(1){
		if(count == 0){
			ate += n;
		}else{
			n++;
			ate += n;
		}

		if(ate >= k) break;

		count++;
	}

	cout << count;

	cout << endl;
	return 0;
}


