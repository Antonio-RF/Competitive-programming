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

vector<int> v;
int n,x;
/*
vector<int> dp;
int f(int cap) {
	if (cap==0) return 1;
	if (cap<0) return 0;

	if (dp[cap] != -1)
		return dp[cap];

	ll ans = 0;
	for (int i=0 ; i<n ; i++)
		ans = (ans + f(cap-v[i])) % MOD;

	return dp[cap] = ans;
}*/


void solution(){
	cin >> n >> x;
	v.resize(n);
	for (int &i : v) cin >> i;
	//dp.assign(x+1, -1);
	vector<int> dp(x+1, 0);
	dp[0] = 1;
	for (int i=1 ; i<=x ; i++) {
		for (int j=0 ; j<n ; j++) {
			if (v[j]>i)
				continue;
			dp[i] = (dp[i]+dp[i-v[j]])%MOD;
		}
	}

	cout << dp[x] << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












