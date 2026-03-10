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
		ll a, b, c, d;
		cin >> a >> b >> c >> d;

		vector<pair<ll,ll>> v(2);
		v[0].first = b;
		v[0].second = a;
		v[1].first = d;
		v[1].second = c;

		//sort(v.begin(),v.end(),[](const auto &p1,const auto &p2 ){
		//	return p1.second > p2.second;
		//});
		sort(v.begin(), v.end());


		//cout << "v[0] " << v[0].second << " " << v[0].first << endl;
		//cout << "v[1] " << v[1].second << " " << v[1].first << endl;
		if (v[0].second >= v[1].second && v[0].first <= v[1].first) {
			cout << v[0].first-v[0].second << endl;
		}
		else if (v[0].first >= v[1].second)
			cout << v[0].first - v[1].second << endl;
		else cout << 0 << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























