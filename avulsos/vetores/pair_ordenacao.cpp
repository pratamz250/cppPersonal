#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ii = pair<int, int>;

int main(){
	vector<ii> v = { {2, 33}, {4, 5}, {10, 9}, {-1, 0}, {100, -3} };

	for(auto [a, b] : v)
		cout << a << " " << b << endl;

	cout << endl;
	//sort(v.begin(), v.end()); //ordenado pelo primeiro
	sort(v.begin(), v.end(), [](auto a, auto b){ //ordenado pelo segundo
			return a.second < b.second;
		});

	for(auto [a, b] : v)
		cout << a << " " << b << endl;

	cout << endl;
	return 0;
}
