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

int n, m;
vector<string> g;

int ff(int r, int c, char c1, char c2) {
	if (r<0 || r>=n || c <0 || c >= m) return 0;
	if (g[r][c] != c1) return 0;
	g[r][c] = c2;
	for (int d=0 ; d<4 ; d++)
		ff(r+dx4[d], c+dy4[d], c1, c2);
	return 1;
}

void solution(){
	cin >> n >> m;
	g.resize(n);
	for (int i=0 ; i<n ; i++)
			cin >> g[i];

	ll ans=0;
	for (int i=0 ; i<n ; i++) {
		for (int j=0 ; j<m ; j++) {
			if (g[i][j]=='.')
				ans += ff(i,j,'.', '#');
		}
	}

	cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












