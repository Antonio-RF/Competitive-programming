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

ll MODI = 1e9+7;
ll MODF = MODI-1;
ll power(ll base, ll expo) {
	ll ans=1;
	base %= MODI;
	while(expo) {
		if (expo & 1LL)
			ans = (ans*base)%(MODI);
		base = (base*base)%MODI;
		expo >>= 1LL;
	}
	return ans;
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;

		vector<ll> v(n);
		set<ll> st;
		bool tem_menos_um=false;
		for (int i=0 ; i<n; i++) {
			cin >> v[i];
			st.insert(v[i]);
			if (v[i]==-1) tem_menos_um=true;
		}

		ll expo = n-st.size();

		ll temp=0;
		if (tem_menos_um) {
			sort(v.begin(), v.end());
			for (int i=0 ; i<n-1 ; i++) {
				if (v[i]+1==v[i+1]) temp++;
			}
		}

		ll ans = power(2, expo);
		ans = ans * (temp+1)%MODI;
		cout << ans << endl;

	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

