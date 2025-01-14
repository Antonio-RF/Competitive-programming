#include <bits/stdc++.h>
using namespace std;

int main() {

	int abas_iniciais, qntd;
	cin >> abas_iniciais >> qntd;


	string acao;
	int count=0;
	for(int c=0 ; c<qntd ; c++) {
		cin >> acao;
		if (acao == "fechou") {
			count += 1;
		}
		else {
			count -= 1;
		}
	}

	int resultado;
	resultado = abas_iniciais + count;

	
	cout << resultado << endl;

}
