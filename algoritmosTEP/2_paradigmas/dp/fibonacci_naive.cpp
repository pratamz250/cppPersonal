#include <iostream>

using namespace std;

int f(int n);

int main(){
	int n;

	cin >> n;

	cout << f(n) << endl;

	cout << endl;
	return 0;
}

int f(int n){
	if(n <= 1)
		return n;

	return f(n-1) + f(n-2);
}
