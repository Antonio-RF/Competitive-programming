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

ll n, m;
vector<int> vn, vm;

void solution(){
	ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;

        ll sum=0;
        vector<ll> v(n);
        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
            sum += v[i];
        }


        vector<ll> posts(m);
        for (int i=0 ; i<m ; i++) {
            cin >> posts[i];
            posts[i]--;
        }
        sort(posts.begin(), posts.end());

        ll l=0, cur=sum;
        for (int i=0 ; i<n ;i++) {
            if (posts[l]==i) {
                cur += -v[i];
                //cout << "cur alterado em: " << i << " : " << cur << endl;
                sum = max(cur, sum);
                l++;
            }
            else cur += -v[i];

            cout << "cur: " << cur << endl;
        }
        cout << sum << "\n";
        

    }
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 