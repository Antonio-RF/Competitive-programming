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
 
int convert_for_number(char k) {
	if (k == 'A') return 0;
	if (k == 'C') return 1;
	if (k == 'G') return 2;
	return 3;
}
 
char convert_for_char(int n) {
	if (n == 0) return 'A';
	if (n == 1) return 'C';
	if (n == 2) return 'G';
	return 'T';
}
 
char char_for_char(char k) {
	if (k == 'A') return 'T';
	if (k == 'C') return 'G';
	if (k == 'G') return 'C';
	return 'A';
}
 
void solution(){
	ll n, x;
	cin >> n >> x;
	string s;
	cin >> s;
 
	string resp = "";
	for (int i=0 ; i<n ; i++) {
		resp += char_for_char(s[i]);
	}
 
	ll op_xor = x;
	for (int i=0 ; i<n ; i++) {
		int temp = convert_for_number(s[i]);
		int temp2 = convert_for_number(resp[i]);
		op_xor ^= temp;
 
		ll p = ((op_xor % 4)+temp2)%4;
		resp[i] = convert_for_char(p);
	}
	cout << resp << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
