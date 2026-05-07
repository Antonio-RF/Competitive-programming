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
	ll n;
	cin >> n;
	vector<ll> v1(n), v2(n);
	for (ll &i : v1) cin >> i;
	for (ll &i : v2) cin >> i;

	vector<ll> copiav1=v1;
	vector<ll> copiav2=v2;

	sort(copiav1.begin(), copiav1.end());
	sort(copiav2.begin(), copiav2.end());
	bool deu=true;
	map<ll,vector<ll>> freq;
	ll ref = copiav2[n-1]+copiav1[0];
	for (int i=0 ; i<n ; i++)  {
		if (copiav1[i]+copiav2[n-1-i]!=ref) {
			deu = false;
			break;
		}
		freq[copiav2[n-1-i]].push_back(copiav1[i]);
	}
	if (!deu) cout << "NAO" << endl;
	else {
		cout << "SIM" << endl;
		for (int i=0 ; i<n ; i++) {
    		auto &vec = freq[v2[i]];
    		cout << vec.back() << " ";
			vec.pop_back();
		}
		cout << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












