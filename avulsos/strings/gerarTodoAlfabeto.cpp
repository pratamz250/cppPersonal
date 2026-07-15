#include <bits/stdc++.h>

using namespace std;

int main(){
	char start = 'a';
	string alfabeto;
	int count = 1;

	for(int i=start; i<='z'; i++){
		alfabeto.push_back(i);
	}

	for(auto e : alfabeto){
		cout << e << "|" << count << " ";
		count++;
	}
	
	cout << endl;
	return 0;
}
