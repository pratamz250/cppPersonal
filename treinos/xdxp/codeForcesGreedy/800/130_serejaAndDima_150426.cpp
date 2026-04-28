#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
constexpr ll oo { 1LL << 62 };
constexpr ll PRIME { 1'000'000'007 };
constexpr double PI { acos(-1.0) };

int main(){
	fastIO;

	int n, sumS=0, sumD=0;
	vector<int> cards;

	cin >> n;

	for(int i=0; i<n; i++){
		int aux;
		cin >> aux;
		cards.push_back(aux);
	}

	for(int i=0; i<n; i++){
		if(!(i & 1)){
			if(*cards.begin() > *(cards.end() - 1)){
				sumS += *cards.begin();
				cout << *cards.begin() << endl;
				cards.erase(cards.begin());
			}else{
				sumS += *(cards.end() - 1);
				cout << *(cards.end() - 1) << endl;
				cards.erase(cards.end() - 1);
			}
		}else{
			if(*cards.begin() > *(cards.end() - 1)){
				sumD += *cards.begin();
				cout << *cards.begin() << endl;
				cards.erase(cards.begin());
			}else{
				sumD += *cards.end() - 1;
				cout << *(cards.end() - 1) << endl;
				cards.erase(cards.end() - 1);
			}
		}
	}

	cout << sumS << " " << sumD;

	cout << endl;
	return 0;
}
