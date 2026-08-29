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
		ll n, m;
		cin >> n >> m;
		vector<ll> v1(n),v2(m);
		for (ll &i : v1) cin >> i;
		for (ll &i : v2) cin >> i;

		ll sum1=0, sum2=0;
		for(int i=0 ; i<n-1 ; i++) {
			ll cur = v1[i]-v1[i+1]+1;
			if(cur>0) sum1+=cur;
		}
		for(int i=0 ; i<m-1 ; i++) {
			ll cur = v2[i]-v2[i+1]+1;
			if(cur>0) sum2+=cur;
		}

		sum1+=v1[n-1];
		sum2+=v2[m-1];

		if (sum1>=sum2) cout << 1 << endl;
		else cout << 2 << endl;
	}
}

int main() {
	IO io;
	solution();
	return 0;
}

