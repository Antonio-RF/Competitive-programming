#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n, m, c;
	cin >> n >> m >> c;

	vector<int> b(m);
	for (int &i: b) cin >> i;

	int resp = 0;
	for (int i= 0 ; i<n ; i++) {
		ll count = 0;
		for (int j=0 ; j<m ;  j++) {
			int temp;
			cin >> temp;
			count += b[j]*temp;
		}
		if (count + c > 0) resp++;
	}
	cout << resp << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	solution();

	return 0;
}

