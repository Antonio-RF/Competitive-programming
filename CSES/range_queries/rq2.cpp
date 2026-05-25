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

const int MAXN = 2e5+5;
#define OP(X,Y) min(X,Y)
#define NEUTRAL LINF
#define FACTOR(sz) (sz)
vector<ll> t(4*MAXN);

void build(const vector<int> &src, int ti=1, int tl=1, int tr=-1) {
	if (tl==tr) {
		if (tl < src.size()) t[ti] = src[tl];
		return;
	}
	int tm = (tl+tr)/2;
	build(src, ti*2, tl, tm);
	build(src, ti*2+1, tm+1, tr);
	t[ti] = OP(t[ti*2], t[ti*2+1]);
}

ll op_inclusive(int l, int r, int ti=1, int tl=1, int tr=-1) {
	if (l>r || tr<l || r<tl) return NEUTRAL;
	if (l<=tl && tr<=r) return t[ti];
	int tm = (tl+tr)/2;
	return OP(op_inclusive(l,r,ti*2,tl,tm), op_inclusive(l,r,ti*2+1,tm+1,tr));
}

void solution(){
	ll n, q;
	cin >> n >> q;
	vector<int> v(n+1);
	for(int i=1 ; i<=n ; i++) cin >> v[i];
	build(v,1,1,n);
	for (int i=0 ; i<q ; i++) {
		ll a,b;
		cin >> a >> b;
		cout << op_inclusive(a,b,1,1,n) << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

