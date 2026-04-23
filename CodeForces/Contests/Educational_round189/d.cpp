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

// i mod 4 == 3 <=> pref[i]==0;
ll count_zeros(ll lim){
	if(lim < 0) return 0;
	ll cnt = lim/4;
	if(lim%4 >= 3) cnt++;
	cnt++;
	return cnt;
}

ll count_ones(ll lim){
	if(lim < 0) return 0;
	ll cnt = lim/4;
	if(lim%4 >= 1) cnt++;
	return cnt;
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		ll n, x;
		cin >> n >> x;

		ll l0 = count_zeros(x-1);
		ll l1 = count_ones(x-1);

		ll r0 = count_zeros(n) - l0;
		ll r1 = count_ones(n) - l1;

		ll ans = ((l0 % 998244353) * (r0 % 998244353) + (l1 % 998244353) * (r1 % 998244353)) % 998244353;

		cout << ans << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

