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

		string s1,s2;
		cin >> s1 >> s2;

		char alvo = s1[0];
		bool eh_s1=true;
		ll c=0;
		ll ans=0;
		for (int i=0 ; i<n ; i++) {
			if (eh_s1) {
				if (alvo==s2[c]) {
					if (c!=(n-1))
						alvo = s1[c+1];
					c++;
					continue;
				}
				else if (c!=(n-1) && alvo==s1[c+1]) {
					alvo = s2[c];
					eh_s1=false;
					continue;
				}
				else {
					alvo = s1[c+1];
					c++;
					ans++;
					continue;
				}
			}
			else {
				if (alvo!=s2[c+1]) {
					ans++;
				}
				if (c<=n-3)
					alvo = s1[c+2];
				c+=2;
				eh_s1=true;
			}
		}
		cout << ans << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 




