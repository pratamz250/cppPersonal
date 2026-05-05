#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main(){
	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<> distrib(1, 100);

	vector<int>n;

	for(int i=0; i<100; i++)
		n.emplace_back(distrib(gen));

	for(auto e : n) cout << e << " ";

	cout << endl;
	return 0;
}
