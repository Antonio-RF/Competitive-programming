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

struct DSU {
    vector<int> pai, tam;

    DSU(int n) {
        pai.resize(n + 1);
        tam.assign(n + 1, 1);
        iota(pai.begin(), pai.end(), 0);
    }

    int find(int x) {
        if (pai[x] == x) return x;
        return pai[x] = find(pai[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return false;

        if (tam[a] < tam[b])
            swap(a, b);

        pai[b] = a;
        tam[a] += tam[b];

        return true;
    }

};

void solution(){
	ll q, p, l;
    cin >> q >> p >> l;

    DSU dsu(q);
    for (int i=0 ;i<l ; i++) {
        ll a, b;
        cin >> a >> b;
        dsu.unite(a,b);
    }

    ll repre = dsu.find(p);

    ll ans=0;
    for (int i=1 ; i<=q ; i++) {
        if (i!=p && dsu.find(i)!=repre) ans++;
    }
    cout << ans << endl;
}
     
int main() {
    IO io;
	solution();
	return 0;
}
 