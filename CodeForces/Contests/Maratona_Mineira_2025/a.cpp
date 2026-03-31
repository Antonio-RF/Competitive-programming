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
	vector<int> v(n+1, -1);

	if (n==1) {
		cout << 1 << endl;
		return;
	}

	v[1]=1;
	v[n]=2;

	priority_queue<tuple<int,int,int>> pq;

	if (n>=3) {
		int l=2, r=n-1;
		int dist=(r-l)/2;
		pq.push({dist,l,r});
	}

	int ini=3;
	while(!pq.empty()) {
		auto[dist, neg_l, l, r] = pq.top();
		pq.pop();

		if (l>r) continue;

		int mid = (l+r)/2;

		v[mid]= ini;
		ini++;

		//esquerda:
		if (l<=mid-1) {
			int nl = l, nr=mid-1;
			int nd= (nr-nl)/2;
			pq.push({nd,-nl,nl,nr});
		}

		//direita:
		if (mid+1 <= r) {
			int nl=mid+1, nr=r;
			int nd= (nr-nl)/2;
			pq.push({nd,-nl,nl,nr});
		}
	}


	for(int i=1 ; i<=n ; i++)
		cout << v[i] << " ";
	cout << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























