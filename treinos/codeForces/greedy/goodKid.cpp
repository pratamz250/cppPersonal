#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
	int t;
	cin >> t;

	while(t--){
		int n, ans=1;
		cin >> n;

		vector<int> as(n);

		for(int i=0; i<n; i++){
			cin >> as[i];
		}

		sort(as.begin(), as.end(), less<int>());

		as[0]++;

		for(int i=0; i<n; i++){
			ans *= as[i];
		}

		cout << ans << endl;
	}

	return 0;
}
