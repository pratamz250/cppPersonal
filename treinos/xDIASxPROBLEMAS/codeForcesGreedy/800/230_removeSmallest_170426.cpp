#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<int> a(n);
		
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a.begin(), a.end(), greater<int>());
		
		bool flag = true;
		for(int i=0; i<n; i++){
			if(i > 0 and abs(a[i] - a[i-1]) > 1){
				flag = false;
				break;
			}
		}
		
		cout << (flag ? "YES" : "NO") << endl;
	}
	return 0;
}