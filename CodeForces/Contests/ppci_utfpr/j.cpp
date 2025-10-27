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
	int tam;
	cin >> tam;
	vector<ll> v(tam);
	for (int i=0 ; i<tam ; i++) {
		ll d, m, a;
		cin >> d >> m >> a;
		v[i] = d+m*30+a*360;
	}
	ll maior = -INT_MAX;
	ll menor = INT_MAX;
	for (int i=0 ; i<tam-1 ; i++) {
		maior = max(maior, v[i+1]-v[i]);
		menor = min(menor, v[i+1]-v[i]);
	}
 
	cout << menor << " " << maior << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
