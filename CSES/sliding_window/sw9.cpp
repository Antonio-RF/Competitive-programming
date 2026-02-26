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
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, __gnu_pbds::rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
 
// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;
 
 
const int MAXN = 2e5+5;
int n; vector<pair<ll, ll>> t(4*MAXN);
 
pair<ll, ll> soma_par(pair<ll, ll> p1, pair<ll,ll> p2) {
	return {p1.first+p2.first, p1.second+p2.second};
}
 
pair<ll,ll> sum(int v, int tl, int tr, int l, int r) {
	if (l>r)
		return make_pair(0,0);
	if (l==tl && r==tr)
		return t[v];
 
	int tm = (tl+tr)/2;
	return soma_par(sum(v*2, tl, tm, l, min(r, tm)),sum(v*2+1, tm+1, tr, max(l, tm+1), r));
}
 
void update(int v, int tl, int tr, int pos, pair<ll,ll> new_val) {
    if (tl == tr) {
        t[v] = soma_par(t[v], new_val);
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = soma_par(t[v*2],t[v*2+1]);
    }
}
 
void solution(){
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	for (ll &i:v) cin >> i;
 
	//coordinate compression:
	vector<ll> b=v, u(n);
	sort(b.begin(), b.end());
	b.erase(unique(b.begin(), b.end()), b.end());
	for (int i=0 ; i<n ; i++)
		u[i] = lower_bound(b.begin(), b.end(), v[i])-b.begin()+1;
 
 
	ll l=0;
	ordered_multiset os;
	for (int r=0 ;r<n ; r++) {
		os.insert({v[r], r});
		update(1, 1, n, u[r], make_pair(v[r], 1));
 
		while(r-l+1 > k) {
			os.erase({v[l], l});
			update(1, 1, n, u[l], make_pair(-v[l], -1));
			l++;
		}
 
		if (r-l+1 == k) {
			ll middle = os.find_by_order(k/2)->first;
			ll m = lower_bound(b.begin(), b.end(), middle)-b.begin()+1;
			pair<ll,ll> s1 = sum(1,1, n,1, m-1);
			pair<ll,ll> s2 = sum(1,1,n, m+1, n);
			cout << -(s1.first-middle*s1.second) + -(middle*s2.second-s2.first) << " ";
		}
	}
	cout << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
