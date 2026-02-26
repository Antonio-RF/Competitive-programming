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
vector<int> tree(4*MAXN, 0);
 
void modify(int p, int val) {
	for (tree[p += MAXN] += val ; p > 1 ; p /= 2)
		tree[p/2] = tree[p] + tree[p^1];
}
int sum(int l, int r) {
	int res = 0;
	for (l += MAXN, r += MAXN ; l<r ; l /=2 , r /= 2) {
		if (l%2) res += tree[l++];
		if (r%2) res += tree[--r];
	}
	return res;
}
 
 
void solution(){
	ll n, k;
	cin >> n >> k;
 
	vector<ll> v(n);
	for (ll &i : v) cin >> i;
 
	//Coordinate compression
	vector<ll> comp = v;
	sort(comp.begin(), comp.end());
	comp.erase(unique(comp.begin(), comp.end()), comp.end());
	for (int i = 0; i < n; i++)
		v[i] = lower_bound(comp.begin(), comp.end(), v[i]) - comp.begin();
 
 
	ll l=0;
	ll cur_ans=0;
	for (int r=0 ; r<n ; r++) {
		cur_ans += sum(v[r]+1, MAXN);
		modify(v[r], 1);
 
		while(r-l+1 > k) {
			modify(v[l], -1);
			cur_ans -= sum(0, v[l]);
			l++;
		}
 
		if (r-l+1==k) {
			cout << cur_ans << " ";
		}
	}
	cout << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
