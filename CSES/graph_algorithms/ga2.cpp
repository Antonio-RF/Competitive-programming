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

vector<string> g;
int R,C;
void solution(){
	cin >> R >> C;

	g.resize(R);
	int si,sj;
	for (int i=0 ; i<R ; i++) {
		cin >> g[i];
	}

	for (int i=0 ; i<R ; i++) {
		for (int j=0 ; j<C ; j++) {
			if (g[i][j]=='A') {
				si=i;
				sj=j;
			}
		}
	}


	queue<pair<int,int>> q;
	vector<vector<int>> vis(R, vector<int> (C));
	vector<vector<pair<int,int>>> par(R, vector<pair<int,int>>(C));

	q.push({si, sj});
	vis[si][sj]=1;
	int bi=-1, bj=-1;

	while(!q.empty()) {
		auto [r,c]=q.front();
		q.pop();

		if (g[r][c]=='B') {
			bi=r;
			bj=c;
			break;
		}

		for (int d=0 ; d<4 ; d++) {
			int nr=r+dx4[d];
			int nc=c+dy4[d];

			if (nr<0 || nr>=R || nc<0 || nc>=C) continue;
			if (vis[nr][nc]) continue;
			if (g[nr][nc]=='#') continue;

			vis[nr][nc]=1;
			par[nr][nc]={r,c};
			q.push({nr,nc});
		}
	}

	if (bi==-1) {
		cout << "NO" << endl;
		return;
	}


	string ans;
	int r=bi, c=bj;
	while(r!=si || c!=sj) {
		auto [pr,pc]=par[r][c];

		if (pr==r-1) ans += 'D';
		else if (pr==r+1) ans += 'U';
		else if (pc==c-1) ans+='R';
		else ans+='L';

		r=pr;
		c=pc;
	}
	reverse(ans.begin(), ans.end());
	cout << "YES" << endl;
	cout << ans.size() << endl;
	cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












