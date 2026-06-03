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

ll n;
vector<ll> v;

ll calcmex(set<ll>& s) {
	for (ll i=0 ; i<100005 ; i++) {
		if (s.find(i)==s.end()) return i;
	}
	return 0;
}
ll solve(ll l, ll r) {
	set<ll> s;
	while(l>=0 && r<2*n && v[l]==v[r]) {
		s.insert(v[l]);
		l--;
		r++;
	}

	ll n = calcmex(s);
	return n;
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cin >> n;

		v.resize(2*n);
		for (ll i=0 ; i<2*n ; i++) cin >> v[i];

		bool prim=false;
		ll ini, fim;
		for (int i=0 ; i<2*n ; i++) {
			if (v[i]==0 && !prim) {
				prim=true;
				ini = i;
			}
			else if (v[i]==0 && prim) {
				fim = i;
			}
		}

		ll ans=1;

		ans = max({solve(ini, ini), solve(fim, fim), solve((ini + fim) / 2, (ini + fim + 1) / 2)});

		cout << ans << endl;
	}

}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

