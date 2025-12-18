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


vector<vector<ll>> g;
vector<int> v;

ll explore(ll u, ll p) {
	ll c= (v[u] == p);
	for (ll to : g[u]) {
			c += explore(to, p);
	}
	//cout << "parou em " << u << endl;
	return c;
}

void solution(){
	ll n, q;
	cin >> n >> q;

	v.assign(n+1, 0);
	for (ll i=0 ; i<n ; i++) {
		ll temp;
		cin >> temp;
		v[i+1] = temp;
	}

	g.assign(n+1, vector<ll>());
	for (ll i=0 ; i<n-1 ; i++) {
		ll x, y;
		cin >> x >> y;
		g[x].pb(y);
	}

	for (ll i=0 ; i<q ; i++) {
		ll x, k;
		cin >> x >> k;
		cout << explore(x, k) << endl;
	}

}

int main() {
    IO io;
	solution();
	return 0;
}









