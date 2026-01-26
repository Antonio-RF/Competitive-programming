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

const int MAX = 1e6 + 5, BLOCK_SIZE= 447, MAXQ = 2e5;

struct Query {
	int l, r, idx;

	bool operator<(const Query &y) const {
		int x_block = l/BLOCK_SIZE;
		int y_block = y.l/BLOCK_SIZE;

		if (x_block == y_block)
			return r < y.r;

		return x_block < y_block;
	}
};

int final_ans[MAXQ], freq[MAXQ];
int A[MAXQ];
int cur_ans;

void operate(int idx, int delta) {
	ll x = A[idx];
	cur_ans += delta * x;
}


void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cur_ans = 0;
		memset(freq, 0, sizeof(freq));
		ll n, q;
		cin >> n >> q;

		vector<int> a(n);
		vector<int> b(n);
		for (int &i : a) cin >> i;
		for (int &i : b) cin >> i;

		for (int i=0 ; i<n-1 ; i++) {
			a[i] = max({a[i], b[i], a[i+1]});
		}
		a[n-1] = max(a[n-1], b[n-1]);

		int maior = a[n-1];
		for (int i=n-1 ; i>=0 ; i--) {
			if (a[i] < maior) {
				a[i] = maior;
			}
			else
				maior = a[i];
		}

		//A[i] = a[i]:
		for (int i=0 ; i<n ; i++)
			A[i] = a[i];

		vector<Query> queries(q);
		for (int i=0 ; i<q ; i++) {
			cin >> queries[i].l >> queries[i].r;
			queries[i].l--, queries[i].r--;
			queries[i].idx = i;
		}
		sort(queries.begin(), queries.end());

		int i=0, j=-1;
		for (const auto[l, r, idx] : queries) {
			while(j<r) operate(++j, 1);
			while(i>l) operate(--i, 1);

			while(i<l) operate(i++, -1);
			while(j>r) operate(j--, -1);

			final_ans[idx] = cur_ans;
		}

		for (int i=0 ; i<q ; i++) cout << final_ans[i] << " ";
		cout << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}

