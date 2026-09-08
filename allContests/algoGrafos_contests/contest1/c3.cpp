#include <iostream>
#include <vector>

using namespace std;
using vi = vector<int>;

int main() {
	int n, s;

	cin >> n >> s;

	vi ida(n), vinda(n);

	for (int i = 0; i < n; i++)
		cin >> ida[i];

	for (int i = 0; i < n; i++)
		cin >> vinda[i];

		if (ida[0] == 0) {
			cout << "NO\n";
			return 0;
		}

	if (ida[s - 1] == 1) {
		cout << "YES\n";
		return 0;
	}

	if (vinda[s - 1] == 1) {
		for (int i = s; i < n; i++) {
			if (ida[i] == 1 && vinda[i] == 1) {
				cout << "YES\n";
				return 0;
			}
		}
	}

	cout << "NO\n";
}
