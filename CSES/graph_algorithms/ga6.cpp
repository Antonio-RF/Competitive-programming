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

vector<ll> profundidade(1e5+8);
vector<vector<ll>> g(1e5+8);
vector<bool> visited(1e5+8, false);
vector<ll> pai(1e5+8, 0);
bool deu=false;
ll inicio,fim;
void dfs(int u) {
	visited[u]=true;
	for (ll v : g[u]) {
		if (deu) return;

		if (!visited[v]) {
			pai[v] = u;
			profundidade[v] = profundidade[u]+1;
			dfs(v);
		}
		else if (v!=pai[u]){
			deu = true;
			inicio = v;
			fim = u;
			return;
		}
	}
}

void solution(){
	ll n, m;
	cin >> n >> m;

	for (int i=0 ; i<m ; i++) {
		ll a,b; cin >> a >> b;
		a--; b--;
		g[a].pb(b);
		g[b].pb(a);
	}

	for (int i=0 ; i<n ; i++) {
		if (!visited[i]) {
			dfs(i);
			if (deu) break;
		}

		if (deu) break;
	}

	if (!deu) {
		cout << "IMPOSSIBLE" << endl;
	}
	else {
		vector<ll> ans;
		ll l=fim;
		while(l!=inicio) {
			ans.pb(l);
			l = pai[l];
		}
		ans.pb(inicio);
		ans.pb(fim);
		cout << ans.size() << endl;
		for (int i=0 ; i<ans.size() ; i++)
			cout << ans[i]+1 << " ";
		cout << endl;

	}



}
 
int main() {
    IO io;
	solution();
	return 0;
}












