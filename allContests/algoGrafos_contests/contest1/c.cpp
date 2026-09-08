#include<iostream>
#include<vector>

using namespace std;
using vi = vector<int>;

int main(int argc, char *argv[]){
	int n, s;

	cin >> n >> s;

	vi ida(n), vinda(n);

	for(int i=0; i<n; i++) ler ida
		cin >> ida[i];

	for(int i=0; i<n; i++) //ler vinda
		cin >> vinda[i];

	if(ida[0] == 0){ //base
		cout << "NO" << endl;
		return 0;
	}

	if(vinda[s-1] == 0){ //contra caso
		cout << "NO" << endl;
		return 0;
	}

	for(int i=1; i<n; i++){
		if(ida[i] == 1 and i+1 >= s and vinda[i] == 1){
			cout << "YES" << endl;
			break;
		}
	}

	//cout << endl;
	return 0;
}
