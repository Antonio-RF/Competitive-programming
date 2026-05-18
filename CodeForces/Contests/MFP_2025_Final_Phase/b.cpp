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

vector<ll> v;
ll n;

/*
vector<vector<ll>> dp;
ll f(int i, int estado) {
    if (i>=n) return 0;

    if (dp[i][estado]!=-1) return dp[i][estado];

    if (estado==0) {
        ll a = v[i] + f(i+1, 1);
        ll b;
        if (i+1<n) b = v[i]+v[i+1]+f(i+2, 1);
        else b = a;
        return dp[i][estado]=max(a, b);
    }
    
    ll a = f(i+1, 0);
    ll b;
    if (i+1<n) b = f(i+2, 0);
    else b = a;
    return dp[i][estado]=min(a,b);
}*/

void solution(){
    ll t;
    cin >> t;
    while(t--) {
        cin >> n;
        v.resize(n);
        for (ll &i : v) cin >> i;

        //dp.assign(n+1, vector<ll>(2, -1));
        //cout << f(0, 0) << endl;

        vector<vector<ll>> dp(n+2, vector<ll> (2, 0));
        for (int i=n-1 ; i>=0 ; i--) {
            ll pega1 = v[i]+dp[i+1][1];
            ll pega2;
            if (i+1 < n)
                pega2 = v[i]+v[i+1]+dp[i+2][1];
            else pega2 = pega1;
            dp[i][0] = max(pega1, pega2);

            ll oda1 = dp[i+1][0];
            ll oda2;
            if (i+1<n)
                oda2 = dp[i+2][0];
            else oda2 = oda1;
            dp[i][1] = min(oda1, oda2);
        }
        cout << dp[0][0] << endl;
        }
}
 
int main() {
    IO io;
	solution();
	return 0;
}