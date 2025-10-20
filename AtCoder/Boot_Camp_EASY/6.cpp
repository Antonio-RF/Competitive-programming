#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	ll r, k;
	cin >> r >> k;

	ll resp;
	if (r == 1 || k == 1)
		resp = 1;
	else if (r*k % 2 == 0)
		resp = (r*k)/2;
	else
		resp = ((r*k)/2) + 1;
	cout << resp << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	solution();

	return 0;
}

