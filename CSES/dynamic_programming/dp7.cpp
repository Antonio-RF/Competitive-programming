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

ll n,x;
vector<int> v,w;
//vector<vector<int>> dp;
/*
int knapsack(int i, int cap) {
	if (i==n || cap==0)
		return 0;

	if (dp[i][cap] != -1)
		return dp[i][cap];

	if (w[i]>cap)
		return dp[i][cap] = knapsack(i+1, cap);

	return dp[i][cap] = max(knapsack(i+1, cap), v[i]+knapsack(i+1, cap-w[i]));
}*/

void solution(){
	cin >> n >> x;

	v.resize(n);
	w.resize(n);
	for (int &i : w) cin >> i;
	for (int &i : v) cin >> i;

	vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
	for (int i=n-1 ; i>=0 ; i--) {
		for (int cap=0 ; cap<=x ; cap++) {
			dp[i][cap] = dp[i+1][cap];
			if (w[i]<=cap)
				dp[i][cap] = max(dp[i][cap], v[i]+dp[i+1][cap-w[i]]);
		}
	}

	cout << dp[0][x] << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












