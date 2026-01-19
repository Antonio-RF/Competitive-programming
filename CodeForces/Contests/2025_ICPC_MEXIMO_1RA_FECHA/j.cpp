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

	string s;
	cin >> s;

	ll r = 0, l = 0;
        map<char, ll> vf;
        ll maxLen = 0;
		ll n = s.size();

        while (r < n) {
            // Adiciona o caractere da direita na janela
            vf[s[r]]++;

            // Checa se há mais de 1 caractere com frequência ímpar — não válido para palíndromos
            ll oddCount = 0;
            for (auto& p : vf) {
                if (p.second % 2 == 1)
                    oddCount++;
            }

            // Enquanto a janela está inválida, ajusta a ponta esquerda (l)
            while (oddCount > 1) {
                vf[s[l]]--;
                if (vf[s[l]] % 2 == 0)
                    oddCount--;
                else
                    oddCount++;
                l++;
            }

            // Atualiza a maior janela válida
            maxLen = max(maxLen, r - l + 1);

            // Avança a ponta direita
            r++;
        }

        // Imprime o comprimento máximo
        cout << maxLen << endl;

}
 
int main() {
    IO io;
	solution();
	return 0;
}

