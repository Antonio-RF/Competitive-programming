#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd,identificador;

	while (cin >> qntd >> identificador) {
		
		int matricula, jogo;
		int resultado;
		resultado = 0;

		for (int c=0 ; c<qntd ; c++) {
			cin >> matricula >> jogo;

			if (matricula == identificador && jogo == 0) {
				resultado += 1;
			} 

		}
		
		cout << resultado << endl;
	}

}
