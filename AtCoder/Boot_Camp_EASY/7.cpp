#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int m[3][3];

void solution() {
	for (int i=0 ; i<3 ; i++) {
		for (int j=0 ; j<3 ; j++) {
			cin >> m[i][j];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solution();

	return 0;
}

