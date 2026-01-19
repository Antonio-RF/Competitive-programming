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
		string s;
		cin >> s;

		ll tam = s.size();
		ll resp = 0;
		if (s[0] == 'u') {
			s[0] = 's';
			resp++;
		}
		if (s[tam-1] == 'u') {
			s[tam-1] = 's';
			resp++;
		}

		for (int i=1 ; i<tam-1 ; i++) {
			if (s[i] == 'u'){
				ll pos_esq = i-1;
				ll dist_esq=1;
				while(s[pos_esq] != 's') {
					dist_esq++;
					pos_esq--;
				}

				ll pos_dir = i+1;
				ll dist_dir=1;
				while(s[pos_dir] != 's') {
					dist_dir++;
					pos_dir++;
				}

				if (dist_esq < dist_dir) {
					s[i+dist_esq] = 's';
					resp++;
				}
				else if (dist_esq > dist_dir) {
					s[i-dist_dir] = 's';
					resp++;
				}
			}
		}
		cout << resp << endl;
	}
}


int main() {
    IO io;
	solution();
	return 0;
}

