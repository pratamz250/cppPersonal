#include <iostream>
#include <bitset>
#include <climits>

using namespace std;

int main(){
	int n = 10412;

	cout << n << " em binario: " << bitset<32>(n) << endl;

	cout << endl;
	return 0;
}
