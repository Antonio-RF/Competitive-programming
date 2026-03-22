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

int n;
bool deu(vector<int> &x, vector<int> &y, int k) {
	for (int i=0 ; i<n ; i++) {
		if (x[i] <= y[(i+k)%n])
			return false;
	}
	return true;
}

void solution(){
	int t;
	cin >> t;
	while(t--) {
		cin >> n;

		vector<int> a(n), b(n), c(n);
		for (int &i : a) cin >> i;
		for (int &i : b) cin >> i;
		for (int &i : c) cin >> i;

		ll k1=0;
		ll k2=0;
		for (int i=0 ; i<n ; i++) {
			if (deu(b,a,i)) k1++;
			if (deu(c,b,i)) k2++;
		}
		cout << k1*k2*n << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























