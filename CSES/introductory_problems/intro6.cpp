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
	ll t;
	cin >> t;
	while(t--) {
		ll y, x;
		cin >> y >> x;

		ll ans = -1;
		if (x >= y && x%2!=0) ans = x*x-y+1;
		else if (x>=y && x%2==0) ans = (x-1)*(x-1)+y;
		else if (y>x && y%2==0) ans = y*y-x+1;
		else if (y>x && y%2!=0) ans = (y-1)*(y-1)+x;

		cout << ans << endl;
	}
}

int main() {
    IO io;
	solution();
	return 0;
}









