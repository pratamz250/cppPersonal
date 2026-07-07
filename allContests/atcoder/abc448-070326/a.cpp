//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
			
	int n, x;
	cin >> n >> x;

	vector<int> as(n);

	for(int i=0; i<n; i++)
		cin >> as[i];	

	for(int i=0; i<n; i++){
		if(as[i] < x){
			x = as[i];
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}

	//cout << endl;
	return 0;
}
