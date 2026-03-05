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
	int n;
	cin >> n;

	vector<pair<int, bool>> v(n+1, {0, true});
	ll soma =0;
	for (int i=1 ; i<=n ; i++) {
		v[i].first = i;
		soma += v[i].first;
	}

	if (soma%2==1) {
		cout << "NO" << endl;
		return;
	}
	else cout << "YES" << endl;

	int k;
	if (n%2==0) k = n/2;
	else k = (n/2)+1;

	int quer = soma/k;
	bool op1;
	if (v[n].first == quer) op1 = true;
	else op1 = false;


	vector<int> v1;
	if (op1) {
		for (int i=0 ; i<(k/2)-1 ; i++) {
			v1.pb(v[i+1].first);
			v1.pb(v[n-i-1].first);
			v[i+1].second = false;
			v[n-i-1].second = false;
		}
		v1.pb(v[n].first);
		v[n].second = false;
	}
	else {
		for (int i=0 ; i<(k/2) ; i++) {
			v1.pb(v[i+1].first);
			v1.pb(v[n-i].first);
			v[i+1].second = false;
			v[n-i].second = false;
		}
	}

	sort(v1.begin(), v1.end());
	cout << v1.size() << endl;
	for (int i=0 ; i<v1.size() ; i++) cout << v1[i] << " ";
	cout << endl;
	cout << n-v1.size() << endl;
	for (int i=1 ; i<=n ; i++) {
		if (v[i].second) cout << v[i].first << " ";
	}
	cout << endl;

}
 
int main() {
    IO io;
	solution();
	return 0;
}












