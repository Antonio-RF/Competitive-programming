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

	vector<tuple<ll,ll,ll>> v0,v1;
	for (int i=0 ; i<n ; i++) {
		ll a,b,c;
		cin >> a >> b >> c;
		if (c==0)
			v0.emplace_back(a,b,i+1);
		else v1.emplace_back(a,b,i+1);
	}

	sort(v0.begin(), v0.end());
	sort(v1.begin(), v1.end());

	if (v0.size()>=1)
		get<1>(v0[0]) = get<0>(v0[0])+get<1>(v0[0]);
	for (int i=1 ; i<v0.size() ; i++) {
		//adicionei isso nathan:
		if ((get<0>(v0[i]))<=(get<1>(v0[i-1])))
			get<0>(v0[i]) = get<1>(v0[i-1]);
		get<1>(v0[i]) = get<0>(v0[i])+get<1>(v0[i]);
	}


	for (int i=0 ; i<v1.size() ; i++) {
		get<1>(v1[i]) = get<0>(v1[i])+get<1>(v1[i]);
	}


	//printando os vetores:
	/*cout << "v[0]: " << endl;
	for (int i=0 ; i<v0.size() ; i++) {
		cout << get<0>(v0[i]) << " " << get<1>(v0[i]) << " " << get<2>(v0[i]) << endl;
	}
	cout << "v[1]: " << endl;
	for (int i=0 ; i<v1.size() ; i++) {
		cout << get<0>(v1[i]) << " " << get<1>(v1[i]) << " " << get<2>(v1[i]) << endl;
	}*/


	//v0 com v1:
	set<ll> ans;
	if (v0.size()>0) {
	for (int i=0 ; i<v1.size() ; i++) {
		tuple<ll,ll,ll> k = v1[i];

		auto p = lower_bound(v0.begin(), v0.end(), k)-v0.begin();
		p--;
		//cout << get<0>(v0[p]) << " " << get<1>(v0[p]) << " " << get<2>(v0[p]) << endl;

		if (get<0>(v0[p])<=get<0>(k) && get<1>(v0[p])>=get<0>(k)) {
			ans.insert(get<2>(v0[p]));
			get<0>(v0[p]) = get<0>(k);
			get<1>(v0[p]) = get<1>(k);
			get<2>(v0[p]) = get<2>(k);
		}

		p++;
		//if(p!=v0.end())
			for (int j=p ; j<v0.size() ; j++) {
				if (get<0>(v0[j]) < get<1>(v0[j-1])) {
					ll diff = get<1>(v0[j])-get<0>(v0[j]);
					get<0>(v0[j]) = get<1>(v0[j-1]);
					get<1>(v0[j]) = get<0>(v0[j])+diff;
				}
				else break;
			}
	}
	}
	else
	//v1 com v1:
	for (int i=1 ; i<v1.size() ; i++) {
		if (get<0>(v1[i])<get<1>(v1[i-1]))
			ans.insert(get<2>(v1[i-1]));
	}

	
	cout << "v[0]: " << endl;
	for (int i=0 ; i<v0.size() ; i++) {
		cout << get<0>(v0[i]) << " " << get<1>(v0[i]) << " " << get<2>(v0[i]) << endl;
	}
	cout << "v[1]: " << endl;
	for (int i=0 ; i<v1.size() ; i++) {
		cout << get<0>(v1[i]) << " " << get<1>(v1[i]) << " " << get<2>(v1[i]) << endl;
	}


	cout << ans.size() << endl;
	for (ll x : ans) cout << x << " ";
	cout << endl;


}
 
int main() {
    IO io;
	solution();
	return 0;
}
 







