#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
	vector<int> v = {1, 4, 23, 5, 2, 3, 13, 7};
	stack<int> p;

	for(auto e : v)
		p.push(e);

	p.pop();
	cout << p.top() << endl;
	cout << p.size() << endl;

	cout << endl;
	return 0;
}
