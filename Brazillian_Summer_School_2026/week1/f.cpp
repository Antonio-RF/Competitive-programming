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
	ll n;
	cin >> n;

	vector<pair<int,int>> posters(n);
	vector<int> coords;

	for (int i=0 ; i<n ; i++) {
		int l, r;
		cin >> l >> r;
		posters[i] = {l, r};

		coords.pb(l);
		coords.pb(r);
		coords.pb(l-1);
		coords.pb(r+1);
	}

	sort(coords.begin(), coords.end());
	coords.erase(unique(coords.begin(), coords.end()), coords.end());

	auto compress = [&](int x) {
		return lower_bound(coords.begin(), coords.end(), x) - coords.begin();
	};

	int M = coords.size();

	set<int> free_pos;
	for(int i=0 ; i< M ; i++) {
		free_pos.insert(i);
	}

	int ans = 0;

	for (int i=n-1 ; i>= 0 ; i--) {
		int l = compress(posters[i].first);
		int r = compress(posters[i].second);

		auto it = free_pos.lower_bound(l);

		//existe uma posição livre && ela ainda está dentro do intervalo [l, r]?
		if (it != free_pos.end() && *it <= r) {
			ans++;

			//remover posições cobertas
			while(it != free_pos.end() && *it <= r)
				it = free_pos.erase(it);
		}
	}

	cout << ans << endl;
}
int main() {
    IO io;
	int T = 1;
	cin >> T;
	while(T--)
		solution();
	return 0;
}









