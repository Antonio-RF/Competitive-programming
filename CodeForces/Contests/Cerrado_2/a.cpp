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
const int MAXN=1e5+5;
#define OP(X,Y) (X+Y)
#define NEUTRAL 0
#define FACTOR(sz) (sz)
vector<ll> t(4*MAXN), lazy(4*MAXN), sety(4*MAXN, -1);

void build(const vector<int>&src, int ti=1, int tl=1, int tr=-1) {
	if (tl==tr) {
		if (tl < src.size()) t[ti] = src[tl];
		return;
	}
	int tm = (tl+tr)/2;
	build(src, ti*2, tl, tm);
	build(src, ti*2+1, tm+1, tr);
	t[ti] = OP(t[ti*2], t[ti*2+1]);
}

void push(int ti, int tl, int tm, int tr) {
	if (sety[ti] != -1) {
		t[ti] = sety[ti] * FACTOR(tm-tl+1);
		lazy[ti*2] = 0; sety[ti*2]=sety[ti];
		t[ti*2+1] = sety[ti] * FACTOR(tr-(tm+1)+1);
		lazy[ti*2+1] = 0; sety[ti*2+1] = sety[ti];
		sety[ti] = -1;
	}
	t[ti*2] += lazy[ti] * FACTOR(tm-tl+1);
	lazy[ti*2] += lazy[ti];
	t[ti*2+1] += lazy[ti] * FACTOR(tr-(tm+1)+1);
	lazy[ti*2+1] += lazy[ti];
	lazy[ti]=0;
}

void add_inclusive(int l, int r, int d, int ti=1, int tl=1, int tr=-1) {
	if (l>r || tr<l || r<tl) return;
	if (l<=tl && tr<=r) {t[ti]+=ll(d)*FACTOR(tr-tl+1); lazy[ti]+=d; return;
	return;}
	int tm = (tl+tr)/2;
	push(ti, tl, tm, tr);
	add_inclusive(l,r,d,ti*2,tl,tm);
	add_inclusive(l,r,d,ti*2+1,tm+1,tr);
	t[ti] = OP(t[ti*2], t[ti*2+1]);
}

void solution(){
	ll n, q;
	cin >> n >> q;
	vector<int> v(n+1);
:
	build(v,1,1,n);
	ll a, b;
	cin >> a >> b;
	//for (int i=0 ; i<q ; i++) {
		//ll a,b;
		//cin >> a >> b;
		//add_inclusive(1,a,b,1,1,n);
	//}

	add_inclusive(1,4,20,1,1,n);

	//passando pelo vetor:
	//ll maior = LLONG_MAX;
	//for (int i=1 ; i<n ; i++) {
	//	if v[i]
	//}


	for (int i=1 ; i<=n ; i++)
		cout << v[i] << " ";
	cout << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

