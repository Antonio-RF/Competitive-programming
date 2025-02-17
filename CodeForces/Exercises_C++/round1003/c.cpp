#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vll = vector <ll>;
using ii = pair <ll, ll>;
using vii = vector <ii>;
 
#define endl '\n'
#define pb push_back
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void c() {
	ll n, m;
	cin >> n >> m;
	vll va(n), vb(m);
	for (ll &i : va) cin >> i;
	for (ll &i : vb) cin >> i;
	sort(vb.begin(), vb.end());
	va.insert(va.begin(), -INF);
	n++;
	for (ll i = 1; i < n; i++) {
		auto it = lower_bound(vb.begin(), vb.end(), -15, [&](ll a, ll _) {
			assert(_ == -15);
			return a-va[i] < va[i-1];
        });

		if (it == vb.end()) continue;
		ll j = *it;
		if (va[i] < va[i-1] && j-va[i] < va[i-1]) continue; // OH MY GOD
		va[i] = min((va[i] < va[i-1] ? INF : va[i]), (j-va[i] < va[i-1] ? INF : j-va[i]));
    }

	cout << (is_sorted(va.begin(), va.end()) ? "YES" : "NO") << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin >> t;
	while(t--) {
		c();
	}


	return 0;
}

