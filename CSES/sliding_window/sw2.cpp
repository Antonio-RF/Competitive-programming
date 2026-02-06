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
	ll n, k;
	cin >> n >> k;

	ll x, a, b, c;
	cin >> x >> a >> b >> c;

	vector<ll> v(n);
	v[0] = x;
	for (ll i=1 ; i<n ; i++) {
		v[i] = (a*v[i-1] + b) % c;
	}

	ll l=0;
	ll ans=0;
	deque<ll> dq;
	for (int r=0 ; r<n ; r++) {

		while(!dq.empty() && dq.back() > v[r])
			dq.pop_back();
		dq.pb(v[r]);


		while(r-l+1 > k) {
			if (dq.front() == v[l])
				dq.pop_front();
			l++;
		}

		if (r-l+1 == k) {
			ans ^= dq.front();
		}
	}
	cout << ans << endl;

}

int main() {
    IO io;
	solution();
	return 0;
}









