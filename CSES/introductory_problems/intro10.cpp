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

ll int_sqrt(ll x) {
	ll ans=0;
	for (ll k=1LL << 30 ; k!=0 ; k/=2) {
		if ((ans+k) * (ans+k) <= x)
			ans+=k;
	}
	return ans;
}

void solution(){
	ll n;
	cin >> n;
	ll sq = sqrt(n);
	cout << sq << endl;
	if (n<5) cout << 0 << endl;
	else cout << ((n/5)-1)+sq << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












