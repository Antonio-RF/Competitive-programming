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


struct UnionFind {
    vector<int> parent, rank_;
    int components;

    UnionFind(int n) : parent(n), rank_(n, 0), components(n) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unite(int x, int y) {
        int rx = find(x), ry = find(y);
        if (rx == ry) return false;
        if (rank_[rx] < rank_[ry]) swap(rx, ry);
        parent[ry] = rx;
        if (rank_[rx] == rank_[ry]) rank_[rx]++;
        components--;  // <---
        return true;
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

void solution(){
	int n, m;
    cin >> n >> m;

    UnionFind uf(n+1);
    uf.components = n;
    for (int i=0 ; i<m ; i++) {
        ll a,b;
        cin >> a >> b;
        uf.unite(a,b);
    }

    if (uf.components == 1)
        cout << 0 << endl;
    else {
        cout << uf.components-1 << endl;
        set<int> raizes;
        for (int i = 1; i <= n; i++)
            raizes.insert(uf.find(i));
        vector<int> v;
        for (int x: raizes) v.pb(x);
        for (int i=0 ; i<v.size()-1 ; i++) cout << v[i] << " " << v[i+1] << endl;
    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}



