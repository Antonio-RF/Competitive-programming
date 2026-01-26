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

		vector<int> v(n);
		ll maior = -1;
		ll pos_maior = -1;
		for (int i=0 ; i<n ; i++) {
			cin >> v[i];
		}

		//confere ordem descrecente:
		bool eh_des = true;
		for (int i=0 ;i<n-1 ; i++) {
			if (v[i]-v[i+1] != 1) {
				eh_des = false;
				break;
			}
		}
		if (eh_des) {
			for (int i=0 ; i<n ; i++)
				cout << v[i] << " ";
			cout << endl;
			continue;
		}

		ll k=-1, u=-1;
		for (int i=0 ; i<n ; i++) {
			ll maior = v[i];
			ll pos = i;
			for (int j=i+1 ; j<n ; j++) {
				if (v[j] >= maior) {
					maior = v[j];
					pos = j;
				}
			}

			if (pos != i) {
				k = i;
				u = pos;
				break;
			}
		}

		if (k != -1)
			reverse(v.begin()+k, v.begin()+u+1);

		for (int i=0 ; i<n ; i++)
			cout << v[i] << " ";
		cout << endl;
	}
}

int main() {
    IO io;
	solution();
	return 0;
}

