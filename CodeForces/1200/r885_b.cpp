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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (ll &i : v) cin >>i;

		vector<vector<ll>> pos(k+1);
		for (int i=0 ; i<n ; i++) pos[v[i]].pb(i);

		ll ans=LLONG_MAX;
		for (int c=1; c<=k ; c++) {
			vector<ll> gaps;
			if (pos[c].empty())
				gaps.pb(n-1);
			else {
				gaps.pb(pos[c][0]); //borda esquerda
				for (ll j=1 ; j<pos[c].size() ; j++)
					gaps.pb(pos[c][j] - pos[c][j-1]-1);
				gaps.pb(n-1-pos[c].back); //borda direita
			}


			ll b1=-1, b2=-1;
			for (ll g : gaps) {
				if (g > b1) {
					b2 = b1;
					b1 = g;
				}
				else if (g>b2) b2 = g;
			}

			ll cur = max(b2, b1/2);
			ans = min(ans, cur);
		}
		cout << ans << endl;

	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












