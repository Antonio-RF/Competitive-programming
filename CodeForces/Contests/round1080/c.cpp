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
 
int dp[300005][7];
ll n;
/*
int f(int i, int last) {
	if (i==n) return 0;
 
	if (memo[i][last] != -1) return memo[i][last];
	int ans = 1e9;
 
	if (last==0 || ok(last, v[i]))
		ans = min(ans, f(i+1, v[i]));
 
	for (int x=1 ; x<=6 ; x++) {
		if (last==0 || ok(last, x))
			ans = min(ans, 1+f(i+1, x));
	}
 
	return memo[i][last] = ans;
}
*/
vector<int>v(300005);
void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cin >> n;
		for (int i=0 ; i<n ; i++) cin >> v[i];
 
		memset(dp[n], 0, sizeof(dp[n]));
 
		for (int i=n-1 ; i>=0 ; i--) {
			for (int j=0 ; j<=6 ; j++) {
				dp[i][j] = 1e9;
				for (int c=1 ; c<=6 ; c++) {
					if ((j!=0)&&(c==7-j || c==j)) continue;
					int cost = c != v[i];
					dp[i][j] = min(dp[i][j], dp[i+1][c]+cost);
				}
			}
		}
 
 
		cout << dp[0][0] << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
