#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ans = false;

void solution() {
	int n;
	cin >> n;
	vector <ll> v(n);
	for (ll &i : v)
		cin >> i;

	//Conferindo se o vetor já é um palíndromo:
	bool controle = true;
	ll temp1 = 0;
	ll temp2 = 0;
	for (int i = 0 ; i < (n/2) ; i++) {
		if (v[i] != v[n-1-i]) {
			controle = false;
			temp1 = v[n-1-i];
			temp2 = v[i];
			break;
		}
	}
	if (controle) {
		ans = true;
		return;
	}



	//Se não tiver, trocamos:
	vector <ll> vs;
	for (int i=0 ; i<n ; i++)
		if (v[i] != temp2) {
			vs.pb(v[i]);
		}
	bool controle2 = true;
	for (int p=0 ; p<(vs.size()/2) ; p++) {
		if (vs[p] != vs[vs.size()-1-p]) {
			controle2 = false;
			break;
		}
	}
	if (controle2)
		ans = true;

	//Se não tiver, trocamos part2:
	vector <ll> vs2;
	for (int i=0 ; i<n ; i++)
		if (v[i] != temp1) {
			vs2.pb(v[i]);
		}
	for (int p=0 ; p<(vs2.size()/2) ; p++) {
		if (vs2[p] != vs2[vs2.size()-1-p])
			return;
	}
	ans = true;


}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		solution();
		if (ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		ans = false;
	}

	return 0;
}

