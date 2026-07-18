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

		vector<int> a(n),b(n);
		for (int &i : a) cin >> i;
		for (int &i : b) cin >> i;

		//conferindo se eh td igual:
		bool deu=true;
		for (int i=0 ; i<n ; i++) {
			if (a[i]!=b[i]) {
				deu=false;
				break;
			}
		}
		if (deu) {
			cout << 0 << endl;
			continue;
		}

		//pegando qntd de umzero e zeroum
		ll qntd_um_zero=0, qntd_zero_um=0, qntd_zero_zero=0, ums=0;
		for (int i=0 ; i<n ; i++) {
			if (a[i]==1) ums++;
			if (a[i]==1 && b[i]==0) qntd_um_zero++;
			else if (a[i]==0 && b[i]==1) qntd_zero_um++;
			else if (a[i]==0 && b[i]==0) qntd_zero_zero++;
		}

		if (qntd_zero_um>0 && ums==0) {
			cout << -1 << endl;
		}
		else if (qntd_zero_um>0 && qntd_um_zero==0 && qntd_zero_zero==0) {
			cout << -1 << endl;
		}
		else if (qntd_um_zero%2==1) {
			cout << 1 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

