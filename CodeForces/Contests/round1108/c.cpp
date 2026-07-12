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

const int MAXN=2e5+5;
ll ans=0;
vector<ll> v(MAXN);
ll n;
fi(int i, ll val) {
	if (i==n || val<0) return 0;

	if (val==0) ans++;

	fi(i+1, val);
	fi(i+1, val-v[i]);
	fi(i+1, val+v[i]);
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cin >> n;

		ans=0;

		vector<ll> v(n);
		ll sum=0;
		for (int i=0 ; i<n; i++) {
			cin >> v[i];
			ll sum+=v[i];
		}

		fi(0, sum);
		cout << ans << endl;

	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

