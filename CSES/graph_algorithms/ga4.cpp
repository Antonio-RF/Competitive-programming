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

	vector<vector<ll>> g(n);
	for (int i=0 ; i<m ; i++) {
		ll a, b;
		cin >> a >> b;
		a--; b--;
		g[a].pb(b);
		g[b].pb(a);
	}

	queue<int> q;
	q.push(0);
	vector<ll> visited(n+1, 0);
	visited[0]=1;
	vector<ll> pai(n+1, 0);
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto k : g[u]) {
			if (visited[k]==0) {
				visited[k] = visited[u]+1;
				pai[k] = u;
				q.push(k);
			}
		}
	}

	if (visited[n-1]==0) {
		cout << "IMPOSSIBLE" << endl;
	}
	else {
		cout << visited[n-1] << endl;
		vector<ll> ans;
		ans.pb(n-1);
		ll p=pai[n-1];
		while(p!=0) {
			ans.pb(p);
			p = pai[p];
		}
		ans.pb(0);

		reverse(ans.begin(), ans.end());
		for (int i=0 ; i<ans.size() ; i++) cout << ans[i]+1 << " ";
		cout << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












