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
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, __gnu_pbds::rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
 
// Fast I/O
struct IO {
	IO() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
} io;
 
void solution(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;
 
    ll l = 0;
    map<ll, ll> freq;
    set<pair<ll,ll>> os;
    for (ll r = 0; r < n; r++) {
		if (freq[v[r]] > 0)
            os.erase({-freq[v[r]], v[r]});
        freq[v[r]]++;
        os.insert({-freq[v[r]], v[r]});
 
        while (r - l + 1 > k) {
            os.erase({-freq[v[l]], v[l]});
            freq[v[l]]--;
            if (freq[v[l]] > 0)
                os.insert({-freq[v[l]], v[l]});
            l++;
        }
 
        if (r - l + 1 == k)
            cout << os.begin()->second << " ";
    }
 
    cout << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
