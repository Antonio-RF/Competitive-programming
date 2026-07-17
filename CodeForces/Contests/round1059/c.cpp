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

ll MODI=1e9+7;
ll power(ll base, ll expo) {
	ll ans=1;
	base %= MODI;
	while(expo) {
		if (expo & 1LL)
			ans = (ans*base)%MODI;
			base = (base*base)%MODI;
			expo >>= 1LL;
	}
	return ans;
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;

		bitset<64> num1(a);
		bitset<64> num2(b);

		if (__builtin_clz(a) > __builtin_clz(b)) cout << "-1" << endl;
		else if (a == b) cout << 0 << endl;
		else {

			vector<ll> val;
			for (int i=0 ; i<31 ; i++) {
				ll k = (1<<i);
				if (a>=k && (a&k)==0) {
					a += k;
					val.pb(k);
				}
			}

			for (int i=0 ; i<31 ; i++) {
				ll k = (1<<i);
				if (k<=a && (b&k)==0)
					val.pb(k);
			}
			cout << val.size() << endl;
			for (auto k : val) cout << k << " ";
			cout << endl;
		}
	}
}
int main() {
    IO io;
	solution();
	return 0;
}












