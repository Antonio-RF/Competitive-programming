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

int converte(char k) {
	if (k=='0') return 0;
	if (k=='1') return 1;
	if (k=='2') return 2;
	if (k=='3') return 3;
	if (k=='4') return 4;
	if (k=='5') return 5;
	if (k=='6') return 6;
	if (k=='7') return 7;
	if (k=='8') return 8;
	return 9;
}

void solution(){
	string f, a;
	cin >> f >> a;

	int fim = 60*((converte(f[0])*10)+converte(f[1]))+ (converte(f[3])*10) + converte(f[4]);
	int agora = 60*(converte(a[0])*10+converte(a[1]))+ converte(a[3])*10 + converte(a[4]);

	int ans = fim-agora;
	int num = ans/60;
	int den = ans%60;
	if (num<10 && den<10)
		cout << "0" << num << ":0" << den << endl;
	else if (num<10 && den>=10)
		cout << "0" << num << ":" << den << endl;
	else if (num>=10 && den<10)
		cout << num << ":0" << den << endl;
	else
		cout << num << ":" << den << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

