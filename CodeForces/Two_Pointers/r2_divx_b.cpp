#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a,b;
	cin >> a >> b;

	vector <ll> v(a);
	for (ll &i : v)
		cin >> i;

	//Vetor das frequências:
	map <ll, ll> vf;
	for (int i=0 ; i<a ; i++)
		vf[v[i]]++;

	//Vetor dos pares (chave, frequencia):
	vector <ll> valores, prefix_soma;
	ll soma = 0;
	for (auto [x, f] : vf) {
		valores.pb(x);
		soma += f;
		prefix_soma.pb(soma);
	}

	ll input;
	for (ll i=0 ; i<b ; i++) {
		cin >> input;
		auto it = upper_bound(valores.begin(), valores.end(), input);
		if (it == valores.begin())
			cout << 0 << " ";
		else {
			int idx = it - valores.begin() - 1;
			cout << prefix_soma[idx] << " ";
		}
	}
	cout << endl;
	return 0;
}

