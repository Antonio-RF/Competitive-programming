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
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for(ll &i : v) cin >> i;

    for (int i=0 ; i<q ; i++) {
        ll temp; cin >> temp;

        ll k = lower_bound(v.begin(), v.end(), temp)-v.begin();

        if (k==v.size()) {
            ll menor = min({temp,v[k-1],v[k-2]});
            ll maior = max({temp,v[k-1],v[k-2]});
            cout << maior-menor << endl;
        }
        else {
            ll menor1, menor2, maior1, maior2;
            ll ans1=LLONG_MAX, ans2=LLONG_MAX;

            if (k>0) {
                menor1 = min({temp, v[k],v[k-1]});
                maior1 = max({temp, v[k],v[k-1]});
                ans1 = maior1-menor1;
            }
            if (k<(v.size()-1)) {
                menor2 = min({temp, v[k],v[k+1]});
                maior2 = max({temp, v[k],v[k+1]});
                ans2 = maior2-menor2;
            }
            ll resp =  min(ans1,ans2);

            k--;
            while(k>0) {
                ll menor = min({temp, v[k],v[k-1]});
                ll maior = max({temp, v[k],v[k-1]});
                ll ans_temp = maior-menor;
                resp = min(resp, ans_temp);
                if (ans_temp > resp) break;
                k--;
            }
            cout << resp << endl;
        }
    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}