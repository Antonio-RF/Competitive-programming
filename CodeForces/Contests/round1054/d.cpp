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

// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;


void solution(){
	int n;
	cin >> n;
	string word;
	cin >> word;

	vector<int> a;
	vector<int> b;
	for (int i=0 ; i<word.size() ; i++) {
		if (word[i] == 'a') a.pb(i);
		else b.pb(i);
	}


	ll cost_a = 0, cost_b = 0;
	if (!a.empty()) {
		int mid_a = a.size()/2;
		ll shift_a = a[mid_a] - mid_a;
		for (int i=0 ; i<a.size() ; i++) cost_a += llabs(a[i] - (shift_a+i));
	}

	if (!b.empty()) {
		int mid_b = b.size()/2;
		ll shift_b = b[mid_b] - mid_b;
		for (int i=0 ; i<b.size() ; i++) cost_b += llabs(b[i] - (shift_b+i));
	}

	ll ans = min(cost_a, cost_b);
	cout << ans << endl;

}

int main() {
    IO io;
	int T;
	cin >> T;
	while(T--)
		solution();
	return 0;
}









