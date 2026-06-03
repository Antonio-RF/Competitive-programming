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

const int N=2e5+5;
vector<vector<int>> g;
set<int> art;
vector<int> dfs_num, dfs_low, dfs_parent;
int tk=1;

bool articulation(int u, int t) {
	bool achou_v = false;

	if (u==t) achou_v=true;

	dfs_low[u] = dfs_num[u] = ++tk;

	for (int v: g[u]) {
		if (dfs_num[v]==-1) {
			dfs_parent[v]=u;

			bool filho_achou_v = articulation(v,t);
			if (filho_achou_v) {
				if (dfs_low[v]>=dfs_num[u])
					art.insert(u);
				achou_v=true;
			}

			dfs_low[u]=min(dfs_low[u], dfs_low[v]);
		}
		else if (v!=dfs_parent[u])
			dfs_low[u] = min(dfs_low[u], dfs_num[v]);
	}
	return achou_v;
}


// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;

void solution(){
	int n,m;
	cin >> n >> m;

	g.assign(n, {});

	while(m--) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		g[u].pb(v);
		g[v].pb(u);
	}

	int src, fim;
	cin >> src >> fim;
	src--; fim--;

	dfs_num.assign(n,-1);
	dfs_low.assign(n,0);
	dfs_parent.assign(n,-1);

	art.insert(src);
	art.insert(fim);

	articulation(src,fim);

	cout << art.size() << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

