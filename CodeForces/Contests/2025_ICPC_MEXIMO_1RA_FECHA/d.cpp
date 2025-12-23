#include <bits/stdc++.h>
using namespace std;

// Tipos básicos
using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;

// Constantes comuns
const int INF = 1e9+7;
const ll LINF = 1e18;
const int MOD = 1e9+7;

// Direções para grafos/grelhas
const int dx4[4] = {-1,0,1,0};
const int dy4[4] = {0,1,0,-1};

const int dx8[8] = {-1,-1,-1,0,0,1,1,1};
const int dy8[8] = {-1,0,1,-1,1,-1,0,1};

// Macros rápidos
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define f first
#define s second
#define endl '\n'

// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;


void solution(){
	int k;
	cin >> k;

	vector<ll> v(k);
	for (ll &i : v) cin >> i;


	ll n;
	cin >> n;

	vector<vector<ll>> orders(n, vector<ll>(k));
	vector<vector<ll>> somas(n, vector<ll>(k));

	for (int i=0 ; i<n ; i++) {
		for (int j=0 ; j<k ; j++) {
			ll temp;
			cin >> temp;
			orders[i][j] = temp;
			if (i != 0) somas[i][j] = somas[i-1][j] + temp;
			else somas[i][j] = temp;
		}
	}

	ll menor = LLONG_MAX;
	for (int i=0 ; i<k ; i++) {
		if (somas[n-1][i] == 0) continue;
		menor = min(menor, (v[i]/somas[n-1][i]));
	}
	for (ll i=0 ; i<v.size() ; i++) {
		v[i] -= menor * somas[n-1][i];
	}

	ll dia = menor+1;
	while (true) {

		for (ll i=0 ; i<n ; i++) {
			for (ll j=0 ; j<k ; j++) {
				if (v[j] < orders[i][j]) {
					cout << dia << " " << i+1 << endl;
					return;
				}
			}

			for (ll j=0 ; j<k ; j++) {
				v[j] -= orders[i][j];
			}
		}
		dia++;
	}
}

int main() {
    IO io;
	solution();
	return 0;
}









