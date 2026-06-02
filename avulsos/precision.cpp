#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float pi = 3.1415926535;

	cout << setprecision(4) << pi << endl;
	cout << fixed << setprecision(5) << pi << endl;

	return 0;
}
