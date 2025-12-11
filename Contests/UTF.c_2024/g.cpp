#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n, m;
	cin >> n >> m;

	vector<int> diff(n+2, 0);

	while (m--) {
		int l, r;
		cin >> l >> r;
		diff[l]++;
		diff[r+1]--;
	}

	ll nao = 0;
	int cur = 0;

	for (int i=1 ; i<=n ; i++) {
		cur += diff[i];
		if (cur == 0) nao++;
	}

	cout << nao << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	solution();

	return 0;
}

