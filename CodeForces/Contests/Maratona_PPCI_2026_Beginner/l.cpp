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
	ll r, c;
	cin >> r >> c;

	vector<vector<int>> m(r, vector<int> (c));
	for (int i=0 ;i<r ; i++) {
		for (int j=0 ;j<c ; j++) {
			m[i][j] = (i+2)*(r+j+2);
		}
	}

	for (int i=0 ;i<r ; i++) {
		for (int j=0 ; j<c ; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}












