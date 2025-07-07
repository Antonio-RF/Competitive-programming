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

	//lendo e colocando no vetor:
	vector <ll> v(n);
	for (ll &i : v)
		cin >> i;

	//Two pointers:
	ll i = 0, j = n-1;
	ll esq = v[i], dir = v[j];
	ll salva = 0;
	ll count = 2;
	while (n > 1 && i != j-1 && j != i+1) {
		if (esq == dir)
			salva = count;

		if (esq >= dir) {
			j--;
			dir += v[j];
			count++;
		}
		else {
			i++;
			esq += v[i];
			count++;
		}
	}
	if (n > 1 && esq == dir)
		salva = count;

	cout << salva << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
		solution();


	return 0;
}

