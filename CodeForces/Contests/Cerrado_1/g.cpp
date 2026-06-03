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
	ll t;
	cin >> t;
	priority_queue<tuple<ll,ll,string>> pq;
	map<string,ll> m;
	map<string,ll> ent;
	while(t--) {
		string escolha;
		string s;
		ll k;
		cin >> escolha;

		if (escolha == "SAI") {
			cin >> s;
		}
		else if (escolha != "SERVE") {
			cin >> s >> k;
		}

		if (escolha == "CHEGA") {
			pq.push({k,t,s});
			ent[s]=t;
			m[s] = k;
		}
		else if (escolha == "FOME") {
			m[s] += k;
			pq.push({m[s],ent[s],s});
		}
		else if (escolha == "SAI")
			m[s]=0;
		else {
			while(!pq.empty() && m[get<2>(pq.top())]==0) pq.pop();
			cout << get<2>(pq.top()) << endl;
			m[get<2>(pq.top())]=0;
			pq.pop();
		}
	}
}
 
int main() {
    IO io;
	solution();
	return 0;
}
 

