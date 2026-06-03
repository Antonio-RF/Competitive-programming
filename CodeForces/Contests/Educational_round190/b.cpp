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
#define s second
#define endl '\n'
 
// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;

string s;
const int N = 3e5+10;
int dp[N][2][2];
int ts[N][2][2];
int cts=0;
int n;

int f(int i,bool jav1,bool jav3) {
	if (i==n) return 0;

	if(s[i]=='4') return dp[i][jav1][jav3] = 1+f(i+1,jav1,jav3);
	if (s[i]=='2' && (jav1 || jav3)) return dp[i][jav1][jav3] =1+f(i+1, jav1,jav3);

	if (ts[i][jav1][jav3] == cts) return dp[i][jav1][jav3];
	ts[i][jav1][jav3]= cts;

	if (s[i]=='1')
		return dp[i][jav1][jav3] = min(f(i+1, 1,jav3), 1+f(i+1,jav1,jav3));

	if (s[i]=='3')
		return dp[i][jav1][jav3] = min(f(i+1,jav1,1), 1+f(i+1,jav1,jav3));

	return dp[i][jav1][jav3] = f(i+1, jav1,jav3);
}


void solution(){
	ll t;
	cin >> t;
	while(t--) {
		cin >> s;
		n = s.size();
		cts++;
		cout << f(0,0,0) << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

