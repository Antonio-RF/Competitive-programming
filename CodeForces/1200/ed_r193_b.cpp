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
        vector<ll> v(n);
        for (ll &i : v) cin >> i;

        vector<pair<ll,ll>> b;
        b.emplace_back(v[0], 1);
        for (int i=1 ; i<n ; i++) {
            if (b.back().first != v[i])
                b.emplace_back(v[i], 1);
            else
                b.back().s++;
        }

        ll m = b.size();

        //caso m+2:
        bool tem_4=false;
        for (int i=0 ; i<m-1 ; i++) {
            if (b[i].s>1 && b[i+1].s>1) {
                tem_4=true;
                break;
            }
        }

        //caso m+1:
        bool tem_2=false;
        for (int i=0 ; i<m ; i++) {
            if (i<m-1 && b[i].s>1 && (i+2>=m || b[i+2].f != b[i].f)) {
                tem_2=true;
                break;
            }

            if (i>0 && b[i].s>1 && (i-2<0 || b[i-2].f != b[i].f)) {
                tem_2=true;

                break;
            }
        }

        //caso m:
        if (tem_4) cout << m+2 << endl;
        else if (tem_2) cout << m+1 << endl;
        else cout << m << endl;
    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}