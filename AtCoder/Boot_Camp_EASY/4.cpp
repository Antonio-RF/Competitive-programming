#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n;
	cin >> n;

	int p = n*100/108;

	if (int(p*1.08) == n) cout << p << endl;
	else if (int((p+1)*1.08) == n) cout << p+1 << endl;
	else cout << ":(" << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	solution();

	return 0;
}

