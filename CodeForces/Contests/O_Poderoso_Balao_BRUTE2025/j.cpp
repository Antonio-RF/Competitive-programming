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
	ll n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	ll bolas=0;
	for (int i=0 ; i<n ; i++) if (s[i]=='o') bolas++;

	ll cnt=0;
	for (int i=0 ; i<k ; i++) {
		if ((i+1)<=(n-1) && s[i+1]=='o') cnt++;
	}

	ll pos_final = k;

	if ((n-1)-pos_final-1 < bolas) {
		for (int i=n-2 ; i>=(n-1)-bolas ; i--) s[i]='o';
		s[(n-1)-bolas-1] = '#';
		for (int i=0 ; i<(n-1)-bolas-1 ; i++) s[i]='.';
	}
	else {
		ll i=k+1;
		ll temp=0;
		while(i<(n-1)) {
			if (temp==cnt) break;

			if (s[i]!='o') {
				s[i]='o';
				temp++;
			}
			i++;
		}
		s[k]='#';

		for (int i=0 ; i<k ; i++)
			s[i] = '.';
	}

	cout << s << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

