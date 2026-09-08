#include <iostream>
#include <vector>

using namespace std;

int f(int n);
vector<int> dp;

int main(){
	const int MAX = 1'000;
	int n;

	cin >> n;

	dp.resize(MAX, -1);
	
	cout << f(n) << endl;

	cout << endl;
	return 0;
}

int f(int n){
	if(n <= 1)
		return n;

	if(dp[n] != -1)
		return dp[n];

	return dp[n] = f(n-1) + f(n-2);
}
