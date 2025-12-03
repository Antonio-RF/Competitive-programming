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

bool confere_pali(string s) {
	ll l = 0;
	ll r = s.size()-1;

	while (l != r) {
		if (s[l] != s[r]) return false;
		l++;
		r--;
	}
	return true;
}


void solution(){
	int n;
	cin >> n;

	string s;
	cin >> s;
	if (confere_pali(s)) {
		cout << 0 << endl;
		cout << endl;
		return;
	}

	int guarda = 0;
	for (int i = 1; i <= n; i++) {
		for (int mask = 0; mask < (1 << i); mask++) {
			cout << bitset<32>(mask).to_string().substr(32 - i) << endl;
		}
	}

	//cout << guarda << endl;

}

int main() {
    IO io;
	int T = 1;
	cin >> T;
	while(T--)
		solution();
	return 0;
}









