//#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	ll n, t, pos=0, status=0, time, view=0;
	
	cin >> n >> t;

	vector<ll> as(n);

	for(ll i=0; i<n; i++)
		cin >> as[i];

	for(ll i=0; i<t; i++){
		if(i == 0){
			status = 1; //opens chokurei	       
			time = i;
			view++;
		}else if(i == as[pos]){
			status = 0; //closes chokurei
			pos++;
			time = i;
		}else if(i == time+100 and i == as[pos]){
			status = 0; //closes chokurei
			pos++;
		}else if(i == time+100 and i < as[pos]){
			status = 1; //opens chokurei
			pos++;
			view++;
		}else if(i == time+100 and i > as[pos]){
			status = 0; //closes chokurei
			pos++;
			view++;
		}
		if(i == time+100 and i != as[pos] and i != as[pos+1]){
			status = 1; //opens chokurei
			pos++;
			view++;
		}
	}

	cout << view;

	cout << endl;
	return 0;
}
