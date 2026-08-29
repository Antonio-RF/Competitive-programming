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

// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;

int ask(int a, int b) {
	int resp;
	cout << a << " " << b << endl;
	cin >> resp;
	return resp;
}

vector<int> a;
int swaps = 0;
int num_inicial_inversoes=0;
void merge_sort(int l, int r) {
	if (r - l == 1) { return; }
	int mi = l + (r - l) / 2;
	merge_sort(l, mi); merge_sort(mi, r);
	vector<int> aux (r - l);
	int i = l, j = mi;
	for (int k = 0; k < r - l; k++) {
		if (i < mi && j < r) {
			ll num = ask(a[i], a[j]);

			if (num==0) return;
			if (num < num_inicial_inversoes) { swaps += mi - i; num_inicial_inversoes=num; aux[k]=a[j++];}
			else { aux[k] = a[i++]; }
		}
		else if (i < mi) { aux[k] = a[i++]; }
		else { aux[k] = a[j++]; }
	}
	copy(aux.begin(), aux.end(), a.begin()+l);
}

void solution(){
	ll n;
	cin >> n;

	a.resize(n);
	for (int i=0 ; i<n ; i++) a[i]=i+1;

	a[0] = 2;
	a[1] = 1;
	num_inicial_inversoes;
	merge_sort(0, n);

}

int main() {
	IO io;
	solution();
	return 0;
}

