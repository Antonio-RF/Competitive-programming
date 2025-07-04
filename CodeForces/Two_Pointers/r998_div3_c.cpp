#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void soluction() {
	int n, k;
	cin >> n >> k;

	//Vetor normal:
	vector <ll> vetor_normal(n);
	for (ll &i : vetor_normal)
		cin >> i;

	//Vetor de frequências:
	vector <ll> vetor_fqnt(k+1, 0);
	for (ll i : vetor_normal) {
		if (i >= k) continue;
		vetor_fqnt[i]++;
	}

	//Contando se a soma dos valores é igual a k:
	int resp = 0;
	for (ll i = 0 ; i < k ; i++) {
		if (i == k-i) {
			resp += vetor_fqnt[i]/2;
			continue;
		}
		ll minN = min(vetor_fqnt[i], vetor_fqnt[k-i]);
		vetor_fqnt[i] -= minN;
		vetor_fqnt[k-i] -= minN;
		resp += minN;
	}
	cout << resp << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		soluction();
	}

	return 0;
}

