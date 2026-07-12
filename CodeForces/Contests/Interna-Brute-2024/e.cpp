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
	int n, k;
	cin >> n >> k;

	vector<int> v (n);

	cin >> v[0];
	for (int i = 1; i < n; i ++) {
		cin >> v[i];
		v[i] = gcd(v[i-1], v[i]);
	}

	while (k--) {
		int t, x;
		cin >> t >> x;
	
		if (t == 1) {
			x = gcd(x, v.back());
			v.push_back(x);
		}
		else if (t == 2) {
			while (x--)
				v.pop_back();
		}
		else {
			if (v.back() % x == 0)
				cout << "SIM\n";
			else
				cout << "NAO\n";
		}
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}

