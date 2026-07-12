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

ll convert(char a) {
	return a-'0'-49;
}

void solution(){
	string s;
	cin >> s;

	ll n;
	cin >> n;

	vector<vector<int>> v(26, vector<int> (26));
	for (int i=0 ; i<n ; i++) {
		char a, b;
		cin >> a >> b;
		ll a1=convert(a);
		ll a2=convert(b);
		//cout << "a1: " << a1 << endl;
		//cout << "a2: " << a2 << endl;
		v[a1][a2]++;
	}

	bool deu=true;
	for (int i=0 ; i<s.size()-1 ; i++) {
		char temp1=s[i];
		char temp2=s[i+1];

		ll ans1=convert(temp1);
		ll ans2=convert(temp2);
		//cout << "ans1: " << ans1 << endl;
		//cout << "ans2: " << ans2 << endl;

		if(v[ans1][ans2]==0) {
			deu=false;
			break;
		}
	}
	if (deu) cout << "SIM" << endl;
	else cout << "NAO" << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

