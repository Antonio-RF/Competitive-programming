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

int n, x;
vector<int> coins;
vector<vector<int>> dp;
/*
int f(int i, int cap) {
	if (cap ==0) return 0;

	if (i==n || cap < 0) return INF;

	if (memo[i][cap] != -1) return memo[i][cap];

	return memo[i][cap] = min(1+f(i, cap-coins[i]), f(i+1, cap));
}*/

void solution(){
	cin >> n >> x;
	coins.resize(n);
	for (int &i : coins) cin >> i;
	dp.assign(n+1, vector<int>(x+1, INF));
	dp[n][0] = 0;

	for (int i=n-1 ; i>=0 ; i--) {
		for (int cap=0 ; cap<=x ; cap++) {
			dp[i][cap] = dp[i+1][cap];
			if (cap-coins[i] >= 0)
				dp[i][cap] = min(dp[i][cap], 1+dp[i][cap-coins[i]]);
		}
	}


	int resp = dp[0][x];
	if (resp != INF)
		cout << resp << endl;
	else cout << -1 << endl;
	

}
 
int main() {
    IO io;
	solution();
	return 0;
}












