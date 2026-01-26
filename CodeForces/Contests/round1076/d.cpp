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
		ll n;
		cin >> n;

		vector<ll> a(n);
		vector<ll> b(n);
		for (ll &i : a) cin >> i;

		sort(a.begin(), a.end(), greater<ll>());
		ll s = 0;
		ll ans = 0;
		//i é o nível:
		for (int i=1 ; i<=n ; i++) {
			int x;
			//pegando quantas espadas eu preciso para completar o nível
			cin >> x;
			s += x;
			//eu tenho espadas o suficiente para passar desse nível?
			if (s <= n)
				//se eu tiver espadas o suficiente para passar desse nível,
				//eu vou pegar a "ESPADA MAIS FRACA" das "ESPADAS MAIS FORTES" escolhidas para ganhar do nível.
				//e essa "ESPADA MAIS FRACA" será o meu valor máximo de "dificuldade".
				ans = max(ans, a[s-1]*i);
		}
		cout << ans << endl;

	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}

