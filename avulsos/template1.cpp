#include <iostream>

using namespace std;

template <typename T> T maior(T a, T b){
	return (a > b) ? a : b;
}

int main(){
	int a=8, b=9;
	int ans = maior(a, b);
	cout << ans;

	cout << endl;
	return 0;
}
