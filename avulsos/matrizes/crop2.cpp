#include <iostream>
#include <vector>
#include <random>

using namespace std;

void in(vector<vector<int>> &m);
void print(const vector<vector<int>> &m);

int main(){
	size_t l, c;
	
	cin >> l >> c;

	vector<vector<int>> m(l, vector<int>(c));

	in(m);

	print(m);

	cout << endl;
	for(size_t i=0; i<l; i++){
		for(size_t j=0; j<c; j++){
			cout << i+1 << j+1 << " ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}

void in(vector<vector<int>> &m){
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(10, 99);

	for(auto &l : m)
		for(auto &e : l)
			e = distrib(gen);
}

void print(const vector<vector<int>> &m){
	for(const auto &l : m){
		for(auto e : l){
			cout << e << " ";
		}
		cout << endl;
	}
}
