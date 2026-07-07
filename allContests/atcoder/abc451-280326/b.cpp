#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo { 1LL << 62  }
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
	fastIO;
		
	int n, m;
	cin >> n >> m;

	vector<int> as(m+1);
	fill(as.begin(), as.end(), 0);

	vector<int> bs(m+1);
	fill(bs.begin(), bs.end(), 0);

	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		
		as[a] += 1;
		bs[b] += 1;
	}

	for(int i=1; i<=m; i++){
		cout << bs[i] - as[i] << endl;
	}

	//cout << endl;
	return 0;
}

