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
		vector<int> v(3);
		for (int i=0 ; i<3 ; i++) {
			string s;
			cin >> s;
			for (int j=0 ; j<3 ; j++) {
				if (s[j]=='A') v[0]++;
				else if (s[j]=='B') v[1]++;
				else if (s[j]=='C') v[2]++;
			}
		}
		if (v[0]<3) cout << "A" << endl;
		else if (v[1]<3) cout << "B" << endl;
		else cout << "C" << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























