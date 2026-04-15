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
	ll n, m;
	cin >> n >> m;
 
	vector<int> v(m+1, 0);
	ll l;
	cin >> l;
	for (int i=0 ; i<l ; i++) {
		ll temp;
		cin >> temp;
		v[temp] ^= 1;
	}

	vector<int> tam(n);
	vector<vector<int>> va(n);
	for (int i=0 ; i<n ; i++) {
		cin >> tam[i];
		for (int j=0 ; j<tam[i] ; j++) {
			int temp; cin >> temp;
			va[i].pb(temp);
		}
	}

	bool deu=true;
	int guarda=-1;
	for (int i=0 ; i<2*n ; i++) {
		for (int j=0 ; j<tam[i%n] ; j++) {
			v[va[i%n][j]] ^= 1;
		}
		//passando:
		for (int j=1 ; j<=m ; j++) {
			if (v[j]) {
				deu = false;
				break;
			}
		}
		if (deu && guarda == -1) {
			guarda = i+1;
		}
		deu = true;
	}
	if (guarda != -1) cout << guarda << endl;
	else cout << -1 << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












