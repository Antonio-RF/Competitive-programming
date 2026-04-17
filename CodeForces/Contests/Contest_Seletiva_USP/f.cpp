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
	ll n, m, k;
	cin >> n >> m >> k;

	ll N = n+k;
	vector<vector<pair<int,int>>> g(N);
	for(int i=0 ; i<m ; i++) {
		int k1, k2, di;
		cin >> k1 >> k2 >> di;
		k1--; k2--;
		g[k1].pb({k2,di});
		g[k2].pb({k1, di});
	}

	for(int i=0 ; i<n ; i++) {
		int tam; cin >> tam;
		for (int j=0 ; j<tam ; j++) {
			int tipo, w;
			cin >> tipo >> w;
			tipo--;
			int typenodo = n+tipo;
			g[i].pb({typenodo, w});
			g[typenodo].pb({i, 0});
		}
	}

	vector<ll> dist(N, LINF);
	priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
	dist[0]=0;
	pq.push({0, 0});
	while(!pq.empty()) {
		auto front = pq.top(); pq.pop();
		ll d = front.first; int u=front.second;
		if (d != dist[u]) continue;
		for (auto [to, w]: g[u]) {
			if (dist[u]+ (ll)w < dist[to]) {
				dist[to] = dist[u]+(ll)w;
				pq.push({dist[to], to});
			}
		}
	}

	cout << dist[n-1] << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 








