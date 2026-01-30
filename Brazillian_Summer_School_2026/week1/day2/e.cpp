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

vector<vector<int>> grid;
int R, C;

int floodfill(int r, int c, int c2) {
	if (r < 0  || r >= R || c < 0 || c >= C)
		return 0;

	if (grid[r][c] == 0 || grid[r][c] == c2)
		return 0;

	int ans = grid[r][c];
	grid[r][c] = c2;

	for (int d=0 ; d<4 ; d++)
		ans += floodfill(r+dx4[d], c+dy4[d], c2);
	return ans;
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		R = a;
		C = b;

		grid.assign(R, vector<int>(C));
		for (int i=0 ; i<R ; i++) {
			for (int j=0 ; j<C ; j++) {
				cin >> grid[i][j];
			}
		}

		ll ans = 0;
		for (int i=0 ; i<R ; i++) {
			for (int j=0 ; j<C ; j++) {
				if (grid[i][j] != -1 && grid[i][j] != 0) {
					ll k = floodfill(i, j, -1);
					ans = max(ans, k);
				}
			}
		}
		cout << ans << endl;
	}
}

int main() {
    IO io;
	solution();
	return 0;
}









