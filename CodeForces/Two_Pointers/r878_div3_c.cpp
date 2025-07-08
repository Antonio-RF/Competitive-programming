#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int a, k, q;
	cin >> a >> k >> q;

	vector<ll> v(a);
	for (ll &i : v)
		cin >> i;

	ll ans=0, cnt=0;
	for (int p=0 ; p<a ; p++) {
		if (v[p] > q) {
			if (cnt >= k)
				ans += 1LL * (cnt-k+1) * (cnt-k+2) / 2;
			cnt = 0;
		}
		else
			cnt++;
	}
	if (cnt >= k)
		ans += 1LL * (cnt-k+1) * (cnt-k+2) / 2;

	cout << ans << endl;
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

