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

int n,m;
vector<int> v, w;
int memo[1010][1010][2];

int ka(int i, int cap, int sobrecarga) {
	if (i==n) return 0;

	if (memo[i][cap][sobrecarga] != -1) return memo[i][cap][sobrecarga];

	//não pegando:
	int resp = ka(i+1, cap, sobrecarga);

	//pegando normal:
	if (cap >= w[i])
		resp = max(resp, v[i] + ka(i+1, cap-w[i], sobrecarga));

	//pegando com sobrecarga: não gasta capacidade, só marca que usou:
	if (!sobrecarga)
		resp = max(resp, v[i]+ ka(i+1, cap, 1));

	return memo[i][cap][sobrecarga] = resp;
}


void solution(){
	cin >> n >> m;

	v.resize(n);
	w.resize(n);
	memset(memo, -1, sizeof(memo));

	for (int i=0 ; i<n ; i++) {
		cin >> w[i] >> v[i];
	}

	cout << ka(0, m, 0) << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























