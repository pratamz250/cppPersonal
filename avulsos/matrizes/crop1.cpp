#include <iostream>
#include <random>

using namespace std;

template<size_t l, size_t c> void in(int (&m)[l][c]);
template <size_t l, size_t c> void print(int (&m)[l][c]);

int main(){
	constexpr int l=4, c=5;
	int m[l][c];

	in(m);

	print(m);

	cout << endl;
	return 0;
}

template<size_t l, size_t c> void in(int (&m)[l][c]){
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(10, 99);

	for(size_t i=0; i<l; i++)
		for(size_t j=0; j<c; j++)
			m[i][j] = distrib(gen);
}

template <size_t l, size_t c> void print(int (&m)[l][c]){
	for(size_t i=0; i<l; i++){
		for(size_t j=0; j<c; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
