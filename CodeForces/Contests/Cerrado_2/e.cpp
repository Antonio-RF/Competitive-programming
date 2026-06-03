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

void sieve(ll upperbound) {
	sieve_size = upperbound+1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i=2 ; i<=sieve_size ; i++) if (bs[i]) {
		for (ll j=i*i ; j<=sieve_size ; j+=i) bs[j]=0;
		primes.pb((int)i);
	}
}

void solution(){
	sieve(10000000);

	ll t;
	cin >> t;
	vector<ll> v(10000007, 0);
	for (int i=0 ; i<t ; i++) {
		ll N;
		cin >> N;
		ll PF_idx=0, PF = primes[PF_idx];
		while(PF*PF <=N) {
			while(N%PF == 0) {
				N /= PF;
				v[PF]+=PF;
				//factors.pb(PF);
			}
			PF = primes[++PF_idx];
		}
		if (N != 1) v[N]+=N;
		//factors.pb(N);
	}

	sort(v.rbegin(), v.rend());

	//for (int i=0 ; i<v.size() ; i++) cout << v[i] << " ";
	//cout << endl;

	ll ans=0;
	for (int i=0 ; i<v.size() ; i+=2) {
		ans += v[i];
	}
	cout << ans <<endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 












