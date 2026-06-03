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
	ll n, m;
	cin >> n >> m;

	vector<pair<ll,ll>> v(n);
	vector<ll> ve(n);
	for (int i=0 ; i<n ; i++) {
		cin >> v[i].f;
		ve[i] = v[i].f;
		v[i].s = i+1;
	}

	vector<pair<ll,ll>> copia = v;
	sort(ve.begin(), ve.end());
	sort(copia.begin(), copia.end());

	ll l = lower_bound(ve.begin(), ve.end(), m)-ve.begin();
	ll u = upper_bound(ve.begin(), ve.end(), m)-ve.begin();
	u--;


	//cout << "l: " << l << endl;
	//cout << "u: " << u << endl;

	ll mediana;
	if (n%2==0) mediana = n/2;
	else mediana = (n+1)/2;
	mediana--;

	//cout << "mediana: " << mediana << endl;
	
	if (mediana>=l && mediana<=u) {
		cout << 0 << endl;
		return;
	}
	else {
		if (u<mediana) {
			ll diff = abs(n-2*u-1);
			cout << diff << endl;
			for (int i=0 ; i<diff-1 ; i++)
				cout << copia[n-1-i].s << " ";
			cout << endl;
		}
		else {
			ll diff = abs(n-2*l-1);
			cout << diff << endl;
			for (int i=0 ; i<diff ; i++)
				cout << copia[i].s << " ";
			cout << endl;
		}

		}


}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

