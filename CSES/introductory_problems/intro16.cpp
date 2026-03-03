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

vector<ll> v;
ll n;

ll f(ll i, ll cap_a, ll cap_b) {
	if (i==n) return abs(cap_a-cap_b);

	return min(f(i+1, cap_a+v[i], cap_b), f(i+1, cap_a, cap_b+v[i]));
}

void solution(){
	cin >> n;
	v.resize(n);
	for (ll &i : v) cin >> i;

	sort(v.begin(), v.end());

	cout << f(0, 0, 0) << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












