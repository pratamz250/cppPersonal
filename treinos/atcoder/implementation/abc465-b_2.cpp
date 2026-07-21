#include <bits/stdc++.h>
using namespace std;

int solve() {
	int X, Y, L, R, A, B;
	cin >> X >> Y >> L >> R >> A >> B;

	int ans = 0;

	for (int h = A; h < B; h++) {
		if (L <= h && h < R)
			ans += X;
		else
			ans += Y;
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << solve() << '\n';
}
