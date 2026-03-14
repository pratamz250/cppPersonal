//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	int d;
	cin >> d;

	float r = d/2.0;
	float pi = 3.141592653589793;

	cout << fixed << setprecision(13) << pi * (r*r);

	cout << endl;
	return 0;
}
