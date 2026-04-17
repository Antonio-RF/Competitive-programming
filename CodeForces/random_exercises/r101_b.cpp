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
#define s second
#define endl '\n'
 
// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;

ll n, m;
vector<int> vn, vm;

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cin >> n;
		vn.resize(n);
		for (int &i : vn) cin >> i;
		cin >> m;
		vm.resize(m);
		for (int &i : vm) cin >> i;

		vector<int> psn(n+1);
		psn[0]=0;
		int bestn=0;
		for (int i=0 ; i<n ; i++) {
			psn[i+1] = psn[i]+vn[i];
			bestn = max(bestn, psn[i+1]);
		}
		vector<int> psm(m+1);
		psm[0]=0;
		int bestm=0;
		for (int i=0 ; i<m ; i++) {
			psm[i+1] = psm[i]+vm[i];
			bestm = max(bestm, psm[i+1]);
		}
		cout << bestn+bestm << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 








