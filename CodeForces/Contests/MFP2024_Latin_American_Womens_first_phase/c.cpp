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

int n;
vector<int> v;
/*vector<int> dp;
int f(int i) {
	if (i>=v.size()) return 0;

	if (dp[i]!=-1) return dp[i];

	return dp[i] = max(v[i]+f(i*2), v[i]+f((i*2)+1));
}
*/
void solution(){
	cin >> n;

	v.resize((1<<n)+1);
	for (int i=1 ; i<=((1<<n)-1) ; i++)
		cin >> v[i];

	vector<int> dp((1<<n+1)+2, 0);
	for (int i=(1<<n)-1 ; i>=1 ; i--) {
		dp[i] = v[i] + max(dp[i*2], dp[i*2+1]);
	}

	cout << dp[1] << endl;
	//cout << f(1) << endl;

}
 
int main() {
    IO io;
	solution();
	return 0;
}












