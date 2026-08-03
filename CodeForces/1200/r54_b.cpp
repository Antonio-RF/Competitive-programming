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
vector<ll> primes;

void sieve(ll upperbound) {
    sieve_size = upperbound+1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i=2 ; i<=sieve_size ; i++) if (bs[i]) {
        for (ll j=i*i ; j<sieve_size ; j+=i) bs[j]=0;
        primes.pb(i);
    }
}
bool isPrime(ll n) {
    if (n <= sieve_size) return bs[n];
    for (int i=0 ; i< primes.size() ; i++)
        if (n%primes[i]==0) return false;
    return true;
}

void solution(){
	sieve(10000000);
    
    ll n;
    cin >> n;

    ll ans;
    if (isPrime(n)) ans=1;
    else if (n%2==0) ans = n/2;
    else {
        ll i=0;
        while(n%primes[i]!=0) i++;
        ans = 1 + (n-primes[i])/2;
    } 
    cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












