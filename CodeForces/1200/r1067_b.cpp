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
        ll n;
        cin >> n;

        vector<ll> v(2*n);
        for (ll &i : v) cin >> i;
        sort(v.begin(), v.end());

        vector<bool> v_bool(4e5+7);
        map<ll,ll> freq;
        for (int i=0 ; i<2*n ; i++) {
            freq[v[i]]++;
            v_bool[v[i]]=true;
        }

        ll impar=0, elemento_4k_mais_2=0, elemento_4k=0;
        for (int i=0 ; i<2*n ; i++) {
            if (v_bool[v[i]]) {
                if (freq[v[i]]%2==1) impar++;
                else if (freq[v[i]]%4==0) elemento_4k++;
                else elemento_4k_mais_2++;

                v_bool[v[i]]=false;
            }
        }

        ll ans= impar + elemento_4k_mais_2*2 + elemento_4k*2;

        if (impar==0 && elemento_4k%2==1) ans-=2;

        cout << ans << endl;

    
    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}