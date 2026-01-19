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
		string s;
		//cin >> s;
		ll n;
		cin >> n;
		cin >> s;
		bool tem_5 = false;
		bool tem_6 = false;
		for (int i=0 ; i<s.size() ;i++) {
			if (s[i] == '5') {
				if (s[i-1] == '2' && s[i-2] == '0' && s[i-3] == '2')
					tem_5 = true;
			}
			if (s[i] == '6' && i >= 2) {
				if (s[i-1] == '2' && s[i-2] == '0' && s[i-3] == '2')
					tem_6 = true;
			}
		}
		if (tem_6 || !tem_5) {
			cout << 0 << endl;
			continue;
		}
		if (tem_5 && !tem_6) {
			cout << 1 << endl;
		}
	}

}

int main() {
    IO io;
	solution();
	return 0;
}

