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

int f(char x) {
	if (x=='a') return 1;
	if (x=='b') return 2;
	if (x=='c') return 3;
	if (x=='d') return 4;
	if (x=='e') return 5;
	if (x=='f') return 6;
	if (x=='g') return 7;
	if (x=='h') return 8;
	if (x=='i') return 9;
	if (x=='j') return 10;
	if (x=='k') return 11;
	if (x=='l') return 12;
	if (x=='m') return 13;
	if (x=='n') return 14;
	if (x=='o') return 15;
	if (x=='p') return 16;
	if (x=='q') return 17;
	if (x=='r') return 18;
	if (x=='s') return 19;
	if (x=='t') return 20;
	if (x=='u') return 21;
	if (x=='v') return 22;
	if (x=='w') return 23;
	if (x=='x') return 24;
	if (x=='y') return 25;
	return 26;
}

void solution(){
	ll t; cin >> t;
	while(t--) {
		ll n, m;
		cin >> n >> m;
		vector<string> words(n);
		for (int i=0 ; i<n ; i++)
			cin >> words[i];

		ll menor = LLONG_MAX;
		for (int i=0 ; i<n ; i++) {
			bool entrou=false;
			for (int j=i+1 ; j<n ; j++) {
				ll sum=0;
				entrou=true;
				//cout << "comparando: " << words[i] << " com " << words[j] << endl;
				for (int k=0 ; k<m ; k++) {
					sum += abs(f(words[i][k])-f(words[j][k]));
					//cout << abs(f(words[i][k])-f(words[j][k])) << endl;
				}
				menor = min(menor, sum);
			}
		}
		cout << menor << endl;
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}




























