/*
 * Implementação naive de busca binária. Possui falhas
 * */

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main(){
	int n=10000000, count=0, target=99;

	vector<int> as(n);

	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution<> distrib(1, 500);

	for(int i=0; i<n; i++)
		as[i] = distrib(gen);

	sort(as.begin(), as.end(), less<int>());

	/*for(int i=0; i<n; i++)
		cout << as[i] << ":" << i << "  ";

	cout << endl << endl;*/
		
	int a = 0, b = n-1, m = a + (b-a)/2;
	while(1){
		if(as[m] == target){
			cout << m << endl << as[m] << "\nPassos: " << count << endl;
			exit(0);
		}else if(as[m] < target){
			a = m+1;
			m = a + (b - a)/2;
		}else if(as[m] > target){
			b = m-1;
			m = a + (b - a)/2;
		}

		if(a == b-1)
			break;
		else if(b == a-1)
			break;

		count++;
	}

	cout << "Nao existe" << endl;

	return 0;
}
