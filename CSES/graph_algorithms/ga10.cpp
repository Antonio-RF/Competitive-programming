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

ll N=2505;
vector<bool> visited1(N, false), visited2(N, false);
vector<vector<pair<ll,ll>>> g(N), g_inv(N);
vector<ll> d (N, LINF);
void dfs1(int u) {
	visited1[u]=true;
	for (auto [v,_] : g[u]) {
		if (!visited1[v])
			dfs1(v);
	}
}
void dfs2(int u) {
	visited2[u]=true;
	for (auto [v,_] : g_inv[u]) {
		if (!visited2[v])
			dfs2(v);
	}
}
ll bellman_ford(ll src, ll dest, ll n) {
	d[src] = 0;
	for (ll i = 0; i < n - 1; i++) {
		for (ll u=1 ; u<=n ; u++) {
			if (d[u]==LINF) continue;
			for (auto [v,w] : g[u])
				if (d[v] > d[u] + w)
					d[v] = d[u] + w;
		}
	}
	// Verificação de ciclos negativos
	for (ll u=1 ; u<=n ; u++) {
		if (d[u]==LINF) continue;
		for (auto [v,w] : g[u])
			if (d[v]>d[u]+w && (visited1[u]) && visited2[u]) {
				return -LINF;
			}
	}

	return d[dest];
}

void solution(){
	ll n,m;
	cin >> n >> m;


	for (ll i=0 ; i<m ; i++) {
		ll a,b, w;
		cin >> a >> b >> w;
		g[a].pb({b,-w});
		g_inv[b].pb({a,-w});
	}

	dfs1(1);
	dfs2(n);
	ll k = bellman_ford(1,n,n);
	if (k==-LINF) cout << -1 << endl;
	else cout << -k << endl;

}
 
int main() {
    IO io;
	solution();
	return 0;
}












