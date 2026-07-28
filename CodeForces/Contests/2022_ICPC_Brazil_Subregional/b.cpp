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
ll a1, a2, b1, b2, c1, c2;
vector<int> digits;
int solve(int pos, bool ok, bool tight) {
	if (pos==digits.size()) {
		if (ok)
			return 1;
		else
			return 0;
	}
	int limit;
	if (tight) limit = digits[pos];
	else limit=1;

	int total=0;
	for (int dig=0 ; dig<=limit ; dig++) {
		if (dig^b2[pos]!=bits_c2[pos]) ok=false;

		bool new_tight=false;
		if (tight && dig==limit)
			new_tight=true;

		total += solve(pos+1, ok, new_tight);
	}
}


void solution(){
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	bitset<64> bits_a1(a1);
	bitset<64> bits_a2(a2);
	bitset<64> bits_b1(b1);
	bitset<64> bits_b2(b2);
	bitset<64> bits_c1(c1);
	bitset<64> bits_c2(c2);


}
 
int main() {
    IO io;
	solution();
	return 0;
}












