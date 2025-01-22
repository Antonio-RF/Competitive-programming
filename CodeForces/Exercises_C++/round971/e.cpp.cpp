#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	ll testes;
	cin >> testes;
	ll n,k,somadir,somaesq,dir,esq,resultado,meio;
	while(testes--) {
		cin >> n >> k;
		esq = k;
		dir = n+k-1;
		resultado = LINF;
		while(esq <= dir) {
			meio = (esq+dir) / 2;
			somaesq = (k+meio)*(meio+1-k) / 2;
			somadir = (meio+n+k)*(n+k-(meio+1))/2;
			resultado = min(resultado, abs(somaesq-somadir));
			if (somadir >= somaesq) esq = meio + 1;
			else dir = meio - 1;
		}
		cout << resultado << "\n";
	}
    return 0;
}