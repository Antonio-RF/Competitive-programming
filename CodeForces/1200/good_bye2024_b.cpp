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
		ll n; cin >> n;
		vector<pair<ll,ll>> vp(n);
		vector<int> falsos(2*n+7);
		vector<int> boo(2*n+7, 0);
		for (int i=0 ; i<n ; i++) {
			cin >> vp[i].f >> vp[i].s;
			if (vp[i].f == vp[i].s) {
				falsos[vp[i].f]++;
				boo[vp[i].f]=1;
			}
		}

		vector<ll> prefix_sum(2*n+10, 0);
		for (int i=1 ; i<prefix_sum.size() ; i++) {
			prefix_sum[i] = prefix_sum[i-1]+boo[i];
		}


		string ans="";
		for (int i=0 ;i<n ; i++) {
			if (vp[i].f == vp[i].s && falsos[vp[i].f]>1) {
				ans += '0';
				continue;
			}
			else if (vp[i].f == vp[i].s && falsos[vp[i].f]==1) {
				ans += '1';
				continue;
			}

			ll qntd_false = prefix_sum[vp[i].s]-prefix_sum[vp[i].f-1];
			if (qntd_false == (vp[i].s-vp[i].f+1))
				ans += '0';
			else ans += '1';
		}
		cout << ans << endl;
	}
}

int main() {
	IO io;
	solution();
	return 0;
}




















