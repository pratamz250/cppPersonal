#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int kadane(const vector<int> &as){
	int ans;

	//base case
	if(as[0] == 0){
		ans = 1 - as[0];
	}else{
		ans = -1;
	}

	int sum = ans;

	//dp
	for(size_t i=1; i<as.size(); ++i){
		if(sum < 0)
			sum = 0;

		if(as[i] == 0){
			sum++;
		}else{
			sum--;
		}

		ans = max(ans, sum);
	}
	return ans;
}

int main(){
	//prep
	fastIO;

	int n, ones=0;
	cin >> n;

	vector<int> as(n);

	for(int i=0; i<n; ++i){
		cin >> as[i];
		if(as[i] == 1){
			ones++;
		}
	}

	//ans
	int z = kadane(as);
	if(z < 0)
		cout << ones - 1;
	else
		cout << z + ones;

	cout << endl;
	return 0;
}

