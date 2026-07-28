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

char grid[4010][4010];
int R=4010, C=4010;

int floodfill(int r0, int c0, char c1, char c2) {
	if (grid[r0][c0] != c1) return 0;
	int cnt=0;
	vector<pair<int,int>> stack;
	stack.pb({r0,c0});
	grid[r0][c0]=c2;
	while(!stack.empty()) {
		auto [r,c] = stack.back(); stack.pop_back();
		if (r%2==1 && c%2==1) cnt++;
		for (int d=0 ; d<4 ; d++) {
			int nr=r+dx4[d], nc=c+dy4[d];
			if (nr<0||nr>=R||nc<0||nc>=C) continue;
			if (grid[nr][nc]!=c1) continue;
			grid[nr][nc]=c2;
			stack.pb({nr,nc});
		}
	}
	return cnt;
}

void solution(){


	for (int i=0 ; i<R ; i++)
		for (int j=0 ; j<C ; j++)
			grid[i][j]='.';

	for (int i=0 ; i<R ; i+=2)
		for (int j=0 ; j<C ; j+=2)
			grid[i][j]='#';

	ll n;
	cin >> n;
	ll x0, y0;
	cin >> x0 >> y0;
	for (int i=0 ; i<n ; i++) {
		ll a,b;
		cin >> a >> b;

		if (x0==a) {
			ll menor = min(y0,b);
			ll maior = max(y0,b);
			for (int j=menor ; j<maior ; j++)
				grid[2*x0][2*j+1]='#';
		}
		else {
			ll menor = min(x0,a);
			ll maior = max(x0,a);
			for (int j=menor ; j<maior ; j++)
				grid[2*j+1][2*y0]='#';
			
		}
		x0=a;
		y0=b;
	}

	//marcando toda a área que se toca na chapa como parede
	floodfill(1,1,'.','X');

	ll ans=0;
	for (int i=0 ; i<R ; i++) {
		for (int j=0 ; j<C ; j++) {
			if (grid[i][j]=='.') {
				int cnt = floodfill(i,j,'.','#');
				ans = max(ans, (ll)cnt);
			}
		}
	}
	cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












