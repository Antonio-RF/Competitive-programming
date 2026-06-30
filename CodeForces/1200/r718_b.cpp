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
	ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> v(n, vector<ll> (m));
        for (int i=0 ; i<n ;i++) {
            for (int j=0 ; j<m ; j++) {
                cin >> v[i][j];
            } 
        }

        multiset<ll> y;
        {
            multiset<ll> x;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    x.insert(v[i][j]);
            auto it = x.begin();
            for (int i = 0; i < m; i++, it++)
                y.insert(*it);
        }

        vector<vector<int>> marcados(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (y.count(v[i][j])) {
                    marcados[i][j] = 1;
                    y.erase(y.lower_bound(v[i][j]));
                }

        int last = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                while (last < m && marcados[i][last]) {
                    marcados[i][last] = 0;
                    last++;
                }
                if (marcados[i][j]) {
                    swap(v[i][j], v[i][last]);
                    marcados[i][j] = 0;
                    last++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << v[i][j] << " \n"[j==m-1];
        }

    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 