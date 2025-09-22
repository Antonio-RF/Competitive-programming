#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	ll n, m;
	cin >> n >> m;


	vector<ll> v_fqnt(m, 0);
	vector<vector<int>> v;
	ll t = 0;
	for (ll i=0 ; i<n ; i++) {
		v.pb({});
		ll tam;
		cin >> tam;
		for (ll j=0 ; j<tam ; j++) {
			ll temp;
			cin >> temp;
			temp--;
			if (v_fqnt[temp] == 0) t++;
			v_fqnt[temp]++;
			v[i].pb(temp);
		}
	}

	ll ans = (t==m);
	for (ll i=0 ; i<n ; i++) {
		for (ll x : v[i]) {
			v_fqnt[x]--;
			if (v_fqnt[x] == 0) t--;
		}
		ans += (t==m);
		for (ll x : v[i]) {
			if (v_fqnt[x] == 0) t++;
			v_fqnt[x]++;
		}
	}

	cout << (ans >= 3 ? "YES\n" : "NO\n");

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

