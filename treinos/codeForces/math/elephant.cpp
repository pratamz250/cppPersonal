#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	int x, count=0;

	cin >> x;

	if(x < 5){
		cout << 1 << endl;
		exit(0);
	}

	for(int i=5; i<=1000000; i++){
		if(i >= x) break;
		if(i % 5 == 0) count++;
	}

	//cout << (count == 2 ? count-1 : count) << endl;
	cout << count+1 << endl;

	return 0;
}
