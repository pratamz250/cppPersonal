#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	int t;

	cin >> t;

	while(t--){
		long long n, k, count=0;

		cin >> n >> k;

		while(n != 0){
			if(n % k == 0){
				n /= k;
				count++;
			}else{
				long long res = n % k;
				n -= res;
				count += res; 
			}
		}

		cout << count << endl;
	}

	return 0;
}
