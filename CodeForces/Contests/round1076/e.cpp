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

ll sieve_size;
bitset<10000010> bs;
vector<int> primes;
vector<bool> liberados;

void sieve(ll n){
	sieve_size = n+1;
	bs[0]=bs[1]=0;
	for (ll i=2 ; i<sieve_size ; i++){
		if (bs[i]) {
			for (ll j=i*i ; j<=sieve_size ; j+=i) bs[j]=0;
			primes.pb((int)i);
		}
	}
}

int factorize(ll n) {
	int cnt=0;
	for (int i=0 ; i< (int) primes.size() && 1LL*primes[i]*primes[i]<=n ;i++) {
		if (!liberados[primes[i]]) {
			if (n % primes[i]==0) return -1;
			continue;
		}
		int p=primes[i];
		while(n % p == 0) {
			n /= p;
			cnt++;
		}
	}
	if (n>1) {
		if (n < liberados.size() && liberados[n]) cnt++;
		else return -1;
	}
	return cnt;
}

void solution(){
	bs.set();
	sieve(300005);

	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cnt[x]++;
        }
        const int INF = 1e9;
        vector<int> dp(n + 1, INF);
        dp[1] = 0;
        for (int x = 2; x <= n; x++) {
            if (cnt[x] == 0) continue;
            for (int v = 1; v * x <= n; v++) {
                if (dp[v] == INF) continue;
                dp[v * x] = min(dp[v * x], dp[v] + 1);
            }
        }
        for (int i = 1; i <= n; i++) {
            int ans;
            if (i == 1) {
                ans = (cnt[1] > 0 ? 1 : -1);
            } else {
                ans = (dp[i] == INF ? -1 : dp[i]);
            }
            cout << ans << (i == n ? '\n' : ' ');
        }

		}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












