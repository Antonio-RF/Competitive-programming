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

struct NextFree {
    vector<int> par;
    NextFree(int n) : par(n + 1) { iota(par.begin(), par.end(), 0); }
 
    int find(int x) {
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }
 
    // marca x como usado; próximas buscas em x apontarão para x+1
    void use(int x) {
        par[x] = x + 1;
    }
};

 
void solution(){
    ll n, m;
    cin >> n >> m;

    vector<vector<pair<ll,ll>>> g(n);
    for (int i=0 ; i<m ; i++) {
        int k1, k2, di;
        cin >> k1 >> k2 >> di;
        k1--; k2--;
        g[k1].pb({k2, di});
        g[k2].pb({k1, di});
    }

    vector<ll> dist(n, LINF);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    dist[0]=0;
    pq.push({0,0});
    while(!pq.empty()) {
        auto front = pq.top(); pq.pop();
        ll d = front.f; ll u=front.s;
        if (d != dist[u]) continue;
        for (auto [to, w] : g[u]) {
            ll nd = max(dist[u], w);

            if (nd < dist[to]) {
                dist[to] = nd;
                pq.push({nd, to});
            }
        }
    }

    ll dl;
    cin >> dl;
    vector<ll>reg_visitar;
    for (int i=0 ; i<dl ; i++) {
        ll temp; cin >> temp; temp--;
        reg_visitar.pb(dist[temp]);
    }
    vector<ll> escadas(dl);
    for (int i=0 ; i<dl ; i++) cin >> escadas[i];

    sort(reg_visitar.begin(), reg_visitar.end());
    sort(escadas.begin(), escadas.end());

    NextFree nf(dl);

    //maiores_arestas: 0 5 3 7 4 2 
    //reg_visitar: 0 2 3 4 5 7 
    //escadas: 3 3 4 5 5 5 

    ll ans=0;
    for (int i=0 ; i<dl ; i++) {
        ll p = lower_bound(escadas.begin(), escadas.end(), reg_visitar[i])-escadas.begin();
        
        p = nf.find(p);

        if (p >= dl) continue;

        //cout << "p atualizado: " << p << endl;

        nf.use(p);
        ans++;
    }

    cout << ans << endl;


}
 
int main() {
    IO io;
	solution();
	return 0;
}