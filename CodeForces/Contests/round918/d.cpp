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

char convert(char k) {
	if (k=='a' || k=='e') return 'v';
	return 'c';
}

void solution(){
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		string copia=s;
		for (int i=0 ; i<n ; i++) s[i] = convert(s[i]);

		if (n==1 || n==2 || n==3) {
			cout << copia << endl;
			continue;
		}

		string temp="";
		for (int i=0 ; i<n ; i++) {
			temp += s[i];
			//cout << "temp_tam: " << temp.size() << endl;
			//cout << "temp: " << temp << endl;
			if (temp.size()==4) {
				if (temp[3]=='v') {
					cout << copia[i-3] << copia[i-2] << ".";
					temp = "cv";
				}
				else if (temp[3]=='c') {
					cout << copia[i-3] << copia[i-2] << copia[i-1] << ".";
					temp = "c";
				}
			}
		}
		if (temp.size()==2) cout << copia[n-2] << copia[n-1] << endl;
		else cout << copia[n-3] << copia[n-2] << copia[n-1] << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























