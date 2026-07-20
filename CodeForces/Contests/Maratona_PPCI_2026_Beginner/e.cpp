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

struct Time {
    string nome;
    int gols=0;
    int vitorias=0;
};

void solution(){
	ll n;
    cin >> n;

    unordered_map<string, Time> mp;
    for (int i=0 ; i<n ; i++) {
        string temp; cin >> temp;
        mp[temp].nome = temp;
    }


    for (int i=0 ; i<(n-1) ; i++) {
        string t1, t2;
        ll g1, g2;
        cin >> t1 >> g1 >> t2 >> g2;
        mp[t1].gols += g1;
        mp[t2].gols += g2;

        if (g1 > g2) mp[t1].vitorias++;
        else mp[t2].vitorias++;
    }

    vector<Time> v;
    for (auto &x : mp) {
        v.pb(x.second);
    }

    sort(v.begin(), v.end(), [](const Time &a, const Time &b) {
        if (a.gols != b.gols)
            return a.gols > b.gols;

        if (a.vitorias != b.vitorias)
            return a.vitorias > b.vitorias;

        return a.nome < b.nome; 
    });

    for (auto &i : v) cout << i.nome << endl;
}
     
int main() {
    IO io;
	solution();
	return 0;
}