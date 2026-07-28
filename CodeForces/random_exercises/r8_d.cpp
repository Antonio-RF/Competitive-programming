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

ll m,d;
vector<int> digits;
int n;
ll memo[2005][2005];
bool visited[2005][2005];

int solve(int pos, int rem, bool tight) {
	if (pos==n) {
		if (rem==0)
			return 1;
		else
			return 0;
	}

	if (!tight && visited[pos][rem])
		return memo[pos][rem];

	int limit;
	if (tight)
		limit = digits[pos];
	else
		limit = 9;

	bool iseven;
	if ((pos+1)%2==0)
		iseven = true;
	else
		iseven=false;

	int total=0;
	for (int dig=0 ; dig<=limit ; dig++) {
		if (iseven) {
			if (dig!=d)
				continue;
		}
		else {
			if (dig==d)
				continue;
		}

		int new_rem = (rem * 10 + dig) % m;

		bool new_tight=false;
		if (tight && dig==limit)
			new_tight=true;
		else
			new_tight=false;

		total = (total + solve(pos+1, new_rem, new_tight))%MOD;
	}

	if (!tight) {
		memo[pos][rem]=total;
		visited[pos][rem]=true;
	}
	return total;
}

string subtractOne(string s) {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i] = '9';
        i--;
    }
    s[i] = s[i] - 1;
    return s;
}


void solution(){
	cin >> m >> d;

	string a,b;
	cin >> a >> b;
	a = subtractOne(a);


	digits.clear();
	for (char c:a)
		digits.pb(c-'0');
	n = digits.size();
	memset(visited, false, sizeof(visited));
	ll num1 = solve(0,0,true);


	digits.clear();
	for (char c:b)
		digits.pb(c-'0');
	n = digits.size();
	ll num2 = solve(0,0,true);
	memset(visited, false, sizeof(visited));

	ll ans=((num2-num1)%MOD + MOD)%MOD;
	cout << ans << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}












