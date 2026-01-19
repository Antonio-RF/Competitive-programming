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
	ll n;
	cin >> n;

	string d1, d2;
	cin >> d1 >> d2;

	ll ano1 = stoi(d1.substr(0, 4));
	ll mes1 = stoi(d1.substr(5,2));
	ll dia1 = stoi(d1.substr(8,2));
	ll ano2 = stoi(d2.substr(0, 4));
	ll mes2 = stoi(d2.substr(5,2));
	ll dia2 = stoi(d2.substr(8,2));

	ll inicio = ano1*365 + mes1*30 + dia1;
	ll fim = ano2*365 + mes2*30 + dia2;

	//cout << "inicio " << inicio << endl;
	//cout << "fim " << fim << endl;


	ll soma = 0;
	while (n--) {
		string temp;
		ll horas;
		cin >> temp >> horas;

		ll ano = stoi(temp.substr(0, 4));
		ll mes = stoi(temp.substr(5,2));
		ll dia = stoi(temp.substr(8,2));

		ll data = ano*365+mes*30+dia;
		if (data >= inicio && data <= fim) soma += horas;
	}
	cout << soma << endl;


}
 
int main() {
    IO io;
	solution();
	return 0;
}

