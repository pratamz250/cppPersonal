#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;

	ll n, x, y, count=0;
	cin >> n;

	if(n == 1){
		cout << 0 << endl;
		return 0;
	}else if(n == 2){
		cout << 0 << endl;
		return 0;
	}

	n = n/2;

	x=1, y=n-1;

	do{
		x++;
		//cout << x << endl;
		y--;
		//cout << y << endl << "@" << endl;
		count++;
		//if(count == 5) break;
	}while(x != y and x < y);

	cout << count;
		
	cout << endl;
	return 0;
}

