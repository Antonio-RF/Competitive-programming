#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	ll tam;
	cin >> tam;

	vector<ll> v(tam);
	for (ll i=0 ; i<tam ; i++) cin >> v[i];

	vector <ll> vetor_fqnt(tam+1, 0);
	for (ll i: v)
		vetor_fqnt[i]++;

	vector<int> ve;
	for (int i=0 ; i<tam+1 ; i++) {
		if (vetor_fqnt[i] != 0)
			ve.pb(vetor_fqnt[i]);
	}

	ll resp = 0;
	ll max_elemento = *max_element(ve.begin(), ve.end());
	for (ll k = 1; k <= max_elemento; k++) {
		ll count = 0;
		for (ll f : ve) {
			if (f >= k)
				count++;
		}
		if (count >= 1)
			resp = max(resp, count * k);
	}
	cout << resp << endl;
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

