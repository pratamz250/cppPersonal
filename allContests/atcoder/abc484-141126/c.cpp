#include <bits/stdc++.h>
using namespace std;

// Types
using ll = long long;
using vi = vector<int>;

// Constants
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

// Macros
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define bn '\n'

// Functions
int solve();
template <typename T> void printv(const vector<T> &v);

int main(){
	fastIO;

	solve();	

	cout << bn;
}

int solve(){
	int n, count=0, pos=0, op=0;

	cin >> n;

	vi as(n);
	REP(i, 0, n){
		cin >> as[i];
	}

	vi bs(n);
	REP(i, 0, n){
		cin >> bs[i];
	}

	REP(i, 0, n){
		if(as[i] != bs[i]){
			count++;
			if(count == 1){
				pos = i;	

				if(bs[pos] == as[pos+1]) //ex 4
					op = 1;
				else if(bs[pos+1] == as[pos-1]) //ex 1
					op = 2;
			}
		}
	}
	cout << op << bn;

	if(count == 0){
		cout << "Yes";
		return 0;
	}

	if(op == 1){
		REP(i, pos, n-1){
			if(bs[i] != as[i+1]){
				if(bs[i] == as[pos]){
					cout << "Yes";
					return 0;
				}
			}
		}
	}else{
		REP(i, pos, n-1){
			if(bs[i+1] != as[i]){
				if(bs[i+1] == as[pos]){
					cout << "Yes";
					return 0;
				}
			}
		}
	}

	cout << "No";

	return 0;
}

template <typename T> void printv(const vector<T> &v){
	for(const auto &e : v){
		cout << e << " ";
	}	

	cout << bn;
}
