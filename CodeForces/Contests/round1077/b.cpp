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
	ll n;
	string s;
	cin >> n >> s;

	string copys = s;

	if (n == 1 || n == 2) {
		cout << 1 << endl;
		return;
	}

	ll ans = 0;
	if (s[0] == '1') {
		ans++;
		copys[1] = '1';
	}
	if (s[n-1] == '1') {
		ans++;
		copys[n-2] = '1';
	}
	for (int i=1 ; i<n-1 ; i++) {
		if (s[i] == '1') {
			copys[i-1] = '1';
			copys[i+1] = '1';
			ans++;
		}
	}

	for (int i = 0; i < n; ) {
		if (copys[i] == '1') {
			i++;
			continue;
		}

		int j = i;
		while (j < n && copys[j] == '0') j++;

		int len = j - i;

		if (len >= 3 && len%3 == 0)
			ans += len/3;
		else
			ans += len/3 + 1;

		i = j;
	}

	cout << ans << endl;

}

int main() {
    IO io;
	int T = 1;
	cin >> T;
	while(T--)
		solution();
	return 0;
}









