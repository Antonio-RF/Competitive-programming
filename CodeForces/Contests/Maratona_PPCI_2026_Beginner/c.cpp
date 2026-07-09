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

int R, C;
vector<vector<char>> grid;
ll ans=LLONG_MAX;

void solution(){
	cin >> R >> C;
	grid.assign(R, vector<char> (C));

	ll r, c;
	for (int i=0 ; i<R ; i++) {
		for (int j=0 ; j<C ; j++) {
			cin >> grid[i][j];
			if (grid[i][j]=='S') {
				r=i;
				c=j;
			}
		}
	}

	queue<pair<int,int>> q;
	vector<vector<int>> dist(R, vector<int> (C, -1));
	dist[r][c]=0;
	q.push({r,c});
	while(!q.empty()) {
		auto [x,y] = q.front();
		q.pop();

		if (grid[x][y] == 'E') {
			cout << dist[x][y] << endl;
			return;
		}

		for (int d=0 ; d<4 ; d++) {
			int nx = x+dx4[d];
			int ny = y+dy4[d];

			if (nx<0 || nx>=R || ny<0 || ny>=C) continue;
			if (dist[nx][ny] != -1) continue;

			if (grid[nx][ny] == '.' || grid[nx][ny]=='E') {
				dist[nx][ny] = dist[x][y]+1;
				q.push({nx,ny});
			}
		}
	}
	cout << -1 << endl;
}
int main() {
    IO io;
	solution();
	return 0;
}












