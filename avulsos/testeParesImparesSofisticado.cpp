#include <iostream>

using namespace std;

int main(){
	int n = 6;

	if(n & 1)
		cout << "impar";
	else
		cout << "par";

	cout << endl;
	return 0;
}
