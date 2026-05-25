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

vector<vector<int>> g;
vector<int> visited;

bool eh_bipartido(int r) {
	visited[r] = 0;
	queue<int> q;
	q.push(r);
	while(!q.empty()) {
		int f = q.front(); q.pop();
		for (int k : g[f]) {
			if (visited[k] == -1) {
				q.push(k);
				visited[k]=visited[f] ^ 1;
			}
			else if (visited[k] == visited[f])
				return false;
		}
	}
	return true;
}

void solution(){
	ll n, m;
	cin >> n >> m;

	g.resize(n+1, {});
	visited.assign(n, -1);
	for (int i=0 ; i<m ; i++) {
		ll a,b;
		cin >> a >> b;
		a--; b--;
		g[a].pb(b);
		g[b].pb(a);
	}

	for (int i=0 ; i<n ; i++) {
		if (visited[i] == -1) {
			if (!eh_bipartido(i)) {
				cout << "IMPOSSIBLE" << endl;
				return;
			}
		}
	}

	for (int i=0 ; i<n ; i++)
		cout << visited[i]+1 << " ";
	cout << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

