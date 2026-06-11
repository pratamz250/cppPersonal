#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n=100, target=99;

	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution<> distrib(1, 500);

	vector<int> as(n);

	for(int i=0; i<n; i++)
		as[i] = distrib(gen);

	sort(as.begin(), as.end(), less<int>());

	auto it = lower_bound(as.begin(), as.end(), target);

	if(it != as.end() and *it == target){
		cout << distance(as.begin(), it) << endl;
	}else{
		cout << "Nao existe" << endl;
	}

	cout << endl;
	return 0;
}
