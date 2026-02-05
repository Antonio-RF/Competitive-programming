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

vector<int> v;
int n;

int knapsack(int i, int k) {
	if (k==1) return 0;
	if (i>n) return INF;


	if (k % v[i] != 0) return knapsack(i+1, k);

	int ans = knapsack(i+1, k);

	if (k % v[i] == 0)
		return min(ans, 1+knapsack(i, k/v[i]));

	return ans;
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cin >> n;
		v.assign(n+1, 0);
		for (int i=1 ; i<=n ; i++)
			cin >> v[i];

		for (int i=1 ; i<=n ; i++) {
			int ans = knapsack(1, i);
			if (ans >= INF)
				cout << -1 << " ";
			else cout << ans << " ";
		}
		cout << endl;

	}
}

int main() {
    IO io;
	solution();
	return 0;
}









