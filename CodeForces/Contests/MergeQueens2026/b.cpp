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

struct BIT {
	vector<ll> tree;
	int n;
	BIT(int n) : n(n), tree(n+1, 0) {}
	void update(int i, ll val=1) {for (; i<=n ; i+=i&-i) tree[i]+=val;}
	ll query(int i) { ll s=0; for (; i>0; i-=i&-i) s+= tree[i]; return s;}
	ll query(int l, int r) { return l>r ? 0 : query(r)-query(l-1); }
};

void solution(){
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll &i : v) cin >> i;


	//compressão de coordenadas:
	vector<ll> sorted_v = v;
	sort(sorted_v.begin(), sorted_v.end());
	sorted_v.erase(unique(sorted_v.begin(), sorted_v.end()), sorted_v.end());
	int m = sorted_v.size();
	auto compress = [&](ll x) {
		return lower_bound(sorted_v.begin(), sorted_v.end(), x) - sorted_v.begin() + 1;
	};


	vector<ll> less_left(n), greater_right(n);

	//calculando quantos valores são menores que v[i]:
	BIT bit(m);
	for (int i=0 ; i<n ; i++) {
		int c = compress(v[i]);
		less_left[i] = bit.query(c-1);
		bit.update(c);
	}

	//calculando quantos valores são maiores que v[i]:
	BIT bit2(m);
	for (int i=n-1 ; i>=0 ; i--) {
		int c = compress(v[i]);
		greater_right[i] = bit2.query(c+1, m);
		bit2.update(c);
	}

	ll ans = 0;
	for (int i=0 ; i<n ; i++)
		ans += less_left[i]*greater_right[i];

	cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












