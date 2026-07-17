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
		string s1, s2;
		cin >> s1 >> s2;

		bool maior_s1=true;
		ll pos_maior=-1;
		for (int i=0 ; i<s1.size() ; i++) {
			int k1 = s1[i]-'0';
			int k2 = s2[i]-'0';
			if (k1!=k2) {
				if (k1>k2) {
					pos_maior=i;
					break;
				}
				else {
					maior_s1=false;
					pos_maior=i;
					break;
				}
			}
		}

		if (maior_s1) {
			for (int i=pos_maior+1 ; i<s1.size() ; i++) {
				int k1 = s1[i]-'0';
				int k2 = s2[i]-'0';
				if (k1>k2) {
					swap(s1[i], s2[i]);
				}
			}
		}
		else {
			for (int i=pos_maior+1 ; i<s1.size() ; i++) {
				int k1 = s1[i]-'0';
				int k2 = s2[i]-'0';
				if (k1<k2) {
					swap(s1[i], s2[i]);
				}
			}
		}
		cout << s1 << endl;
		cout << s2 << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












