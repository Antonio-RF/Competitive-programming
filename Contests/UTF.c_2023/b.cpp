#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	ll n;
	cin >> n;

	vector<ll> v(n);
	for (ll &i : v) cin >> i;

	vector<ll> prefix_sum;
	ll soma = 0;
	for (auto x : v) {
		soma += x;
		prefix_sum.pb(soma);
	}
	cout << 0 << " ";
	for (int i=0 ; i<n-1 ; i++) {
		cout << prefix_sum[i] << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

		solution();

	return 0;
}

