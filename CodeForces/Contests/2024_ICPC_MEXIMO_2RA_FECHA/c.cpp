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
 
 
void solution(){
	ll L,W,H;
	cin >> L >> W >> H;

	ll l,w,h;
	cin >> l >> w >> h;

	if ((l>L && l>W && l>H) || (w>L && w>W && w>H) || (h>L && h>W && h>H)) {
		cout << 0 << endl;
		return;
	}

	ll op1 = (L/l) * (H/h) * (W/w);
	ll op2 = (L/l) * (H/w) * (W/h);
	ll op3 = (L/w) * (H/l) * (W/h);
	ll op4 = (L/w) * (H/h) * (W/l);
	ll op5 = (L/h) * (H/l) * (W/w);
	ll op6 = (L/h) * (H/w) * (W/l);

	ll ans = max({op1, op2, op3,op4,op5,op6});


	cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
