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
vector<bool> visited;
int MAXN = 2e5+5;
vector<int> colors(MAXN, -1);
ll n0=0, n1=0;
ll n;
bool nbi = false;
 
void bipartido(int i) {
    queue<int> q;
 
	q.push(i);
	visited[i] = 1;
 
	if (colors[i] == -1) {
		colors[i] = 0;
	}
	n0 = (colors[i]==0);
	n1 = (colors[i]==1);
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto &x : g[u]) {
 
			if (colors[x] == -1) {
				colors[x] = 1 - colors[u];
			}
			else if (colors[x] == colors[u])
				nbi = true;
 
			if (!visited[x]) {
				visited[x] = true;
				q.push(x);
				if (colors[x]==0) n0++;
				else n1++;
			}
		}
	}
}
void solution(){
	ll t;
	cin >> t;
	while(t--) {
		ll m;
		cin >> n >> m;
		g.assign(n, {});
		for (int i=0 ; i<m ; i++) {
			ll a,b;
			cin >> a >> b;
			a--; b--;
			g[a].pb(b);
			g[b].pb(a);
		}
 
		ll ans =0;
		visited.assign(n, false);
		for (ll i=0 ; i<n ; i++) {
			if (!visited[i]) {
				nbi = false;
				bipartido(i);
				if (!nbi) {
					ans += max(n0, n1);
				}
			}
		}
 
		cout << ans << endl;
		colors.assign(MAXN, -1);
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
