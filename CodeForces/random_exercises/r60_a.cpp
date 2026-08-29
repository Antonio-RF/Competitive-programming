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
	ll a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    bool ron=false;

    if (c==0 && d>0) ron=true;

    else if (a==0 && b>0 && d>0) ron=true;

    else if (e==0 && f>0 && a>0 && b>0 && c>0 && d>0) ron=true;

    else if (a>0 && c>0 && e>0 && (b*d*f > a*c*e)) ron=true;

   
    if (ron) cout << "Ron\n";
    else cout << "Hermione\n"; 
}
 
int main() {
    IO io;
	solution();
	return 0;
}












