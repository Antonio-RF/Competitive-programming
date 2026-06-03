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
 
const int N = 2*1e5 + 5;
 
 
vector<ll> ms;
vector<vector<pair<ll,ll>>> g(N);
bool pertence[N];
 
//dfs para calcular caminho fechado
ll ans = 0;
bool explore(ll u, ll p) {
	bool okay = false;
	for (auto [v,w]: g[u]) {
		if (v != p) {
			if(explore(v,u)){
				okay = true;
				ans += w;
			}
		}
	}
	if(okay || pertence[u]) return true;
	return false;
}
 
void solution(){
	ll n, m;
	cin >> n >> m;
 
	ms.resize(m+1);
	
	for (ll i=0 ; i<m ; i++) {
		ll temp;
		cin >> temp;
		ms[i]= temp;
		pertence[temp]=true;
	}
 
	for (int i=0 ; i<n-1 ; i++) {
		int k1, k2, di;
		cin >> k1 >> k2 >> di;
		g[k1].pb({k2,di});
		g[k2].pb({k1, di});
	}
 
	vector<ll> dist(n+1, LINF);
	dist[1]=0;
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	pq.push({0,1});
	while(!pq.empty()) {
		auto [d,u] = pq.top();
		pq.pop();
		if (d > dist[u]) continue;
		for (auto [v, w] : g[u]) {
			if (dist[v] > d+w) {
				dist[v] = d+w;
				pq.push({dist[v], v});
			}
		}
	}
 
	explore(1, 0);
	
	//tem que multiplicar por 2 (ida e volta)
	ans = 2*ans;
 
	ll maior = LLONG_MIN;
 
	//cout << "ans: " << ans << endl;
 
	for (int i=1 ; i<=n ; i++)
		if (pertence[i]) maior = max(maior, dist[i]);
	
	ans -= maior;
	cout << ans << endl;
 
 
}
 
int main() {
    IO io;
	solution();
	return 0;
}
