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
 
		vector<ll> v(n);
		for (ll &i : v) cin >> i;
 
		//conferindo se há somente zeros:
		bool not_zero=false;
		for (int i=0 ; i<n ; i++) {
			if (v[i]!=0) {
				not_zero=true;
				break;
			}
		}
		if (!not_zero) {
			cout << 3 << endl;
			cout << 1 << " " << 2 << endl;
			cout << 2 << " " << n-1 << endl;
			cout << 1 << " " << 2 << endl;
			continue;
		}
 
		ll tirar=0, cur=0;
		vector<pair<ll,ll>> ans;
		ll ini=-1;
		bool seq_zero=false;
		for (int i=0 ; i<n ; i++) {
			if(v[i]!=0 && seq_zero) {
				cur++;
				seq_zero=false;
				if (cur>2) {
					cur--;
					ans.pb({ini+1-tirar, i-tirar});
					tirar += cur-1;
					cur=0;
					ini=-1;
					continue;
				}
				ans.pb({ini+1-tirar, i+1-tirar});
				tirar += cur-1;
				cur=0;
				ini=-1;
			}
			else if (v[i]==0 && seq_zero)
				cur++;
			else if (v[i]==0) {
				seq_zero=true;
				ini=i;
				cur++;
			}
		}
 
		if (v[n-1]==0) {
			if (cur>1) {
				ans.pb({ini+1-tirar, n-tirar});
				tirar += cur-1;
			}
			else {
				if (ans.size()>0 && ans.back().s == n-1) ans.back().s = n;
				else ans.pb({n-1-tirar, n-tirar});
				tirar++;
			}
		}
 
		if (n-tirar>0) {
			ans.pb({1, n-tirar});
		}
 
		cout << ans.size() << endl;
		for (int i=0 ; i<ans.size() ; i++) {
			cout << ans[i].f << " " << ans[i].s << endl;
		}
 
	}
}
 
int main() {
	IO io;
	solution();
	return 0;
}
