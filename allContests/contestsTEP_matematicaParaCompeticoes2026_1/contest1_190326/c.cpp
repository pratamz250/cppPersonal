#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	//fastIO;
	string door;
	int rail;

	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> door >> rail;

	if(door == "front" and rail == 1)
		out << "L" << endl;
	else if(door == "front" and rail == 2)
		out << "R" << endl;
	else if(door == "back" and rail == 1)
		out << "R" << endl;
	else if(door == "back" and rail == 2)
		out << "L" << endl;

	in.close();
	out.close();
	
	cout << endl;
	return 0;
}

