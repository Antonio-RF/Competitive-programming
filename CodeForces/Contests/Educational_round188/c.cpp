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
		ll a,b,c,m;
		cin >> a >> b >> c >> m;

		ll a_b = lcm(a,b);
		ll a_c = lcm(a,c);
		ll b_c = lcm(b,c);
		ll a_b_c = lcm(a_b,c);
		ll m_ab = (m/a_b)- (m/a_b_c);
		ll m_ac = (m/a_c)- (m/a_b_c);
		ll m_bc = (m/b_c)- (m/a_b_c);
		ll m_abc = (m/a_b_c);


		ll ans_a = 6*((m/a)-m_ab-m_ac-m_abc) + 3*(m_ab+m_ac) + 2*(m_abc);
		ll ans_b = 6*((m/b)-m_ab-m_bc-m_abc) + 3*(m_ab+m_bc) + 2*(m_abc);
		ll ans_c = 6*((m/c)-m_ac-m_bc-m_abc) + 3*(m_ac+m_bc) + 2*(m_abc);

		cout << ans_a << " " << ans_b << " " << ans_c << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












