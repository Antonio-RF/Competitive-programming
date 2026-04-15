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

const int MAXN = 1e6+5;
const ll INV2 = 500000004LL;

struct mint{
	int v;
	mint(ll _v = 0){ v = int( _v% MOD);if(v<0)v+=MOD;}

	mint& operator += (const mint &o){
		if((v+=o.v) >= MOD) v-= MOD;
		return *this;
	}
	mint& operator -= (const mint &o){
		if((v-=o.v) < 0) v+= MOD;
		return *this;
	}
	mint& operator *= (const mint &o){
		v = int((ll)v*o.v%MOD);
		return *this;
	}
	friend mint operator +(mint a, const mint &b){ return a += b;}
	friend mint operator -(mint a, const mint &b){ return a -= b;}
	friend mint operator *(mint a, const mint &b){ return a *= b;}

	mint pow(ll e) const{
		mint res = 1, a = *this;
		for(;e>0;e>>=1,a*=a){
			if(e&1) res*=a;
		}
		return res;
	}

	mint inv() const{return pow(MOD-2);}
	mint& operator /= (const mint &o){
		return *this *= o.inv();
	}
	friend mint operator / (mint a,const mint &b){return a /= b;}
};

void solution(){
	ll n,q;
	cin >> n >> q;
	vector<int> v(n+1);

	vector<mint> pref1(n+1, 0);
	vector<mint> pref2(n+1, 0);

	for (int i=1; i<=n ; i++) {
		ll x;
		cin >> x;
		mint m(x);
		pref1[i] = pref1[i-1] + m;
		pref2[i] = pref2[i-1] + (m*m);
	}

	mint inv2 = mint(2).inv();
	while(q--) {
		int l,r;
		cin >> l >> r;

		mint sum = pref1[r]-pref1[l-1];
		mint sumSq = pref2[r]-pref2[l-1];

		mint ans = (sum*sum - sumSq) * inv2;
		cout << ans.v << endl;
	}

}
int main() {
    IO io;
	solution();
	return 0;
}




























