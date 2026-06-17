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
	string n;
	cin >> n;

	int ult = n[n.size()-1]-'0';
	int num;
	if (n.size()>=2) {
		int pen = n[n.size()-2]-'0';
		num = pen*10+ult;
	}
	else num = ult;

	ll ans=1;

	//pot2:
	if (num%4==0) ans += 1;
	else if (num%4==1) ans += 2;
	else if (num%4==2) ans += 4;
	else ans += 3;
	//cout << "pot2(ans esperado=3): " << ans << endl;

	//pot3:
	if (num%4==0) ans += 1;
	else if (num%4==1) ans += 3;
	else if (num%4==2) ans += 4;
	else ans += 2;
	//cout << "pot3(ans esperado=6): " << ans << endl;


	//pot4:
	if (num%2==0) ans += 1;
	else ans += 4;
	//cout << "pot4(ans esperado=10): " << ans << endl;


	cout << ans%5 << endl;
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

