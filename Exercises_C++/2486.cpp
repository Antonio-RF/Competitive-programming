#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;
	int numero;
    string tipo;

	while (qntd != 0) {
		
		int soma = 0;

		for (int c=0 ; c<qntd ; c++) {
			cin >> numero;
			cin.ignore();
			getline(cin,tipo);

			if (tipo == "suco de laranja") {
				soma += (numero * 120);
			}
			else if (tipo == "morango fresco") {
				soma += (numero * 85);
			}
			else if (tipo == "mamao") {
                soma += (numero * 85);
            }
			else if (tipo == "goiaba vermelha") {
                soma += (numero * 70);
            }
			else if (tipo == "manga") {
                soma += (numero * 56);
            }
			else if (tipo == "laranja") {
                soma += (numero * 50);
            }
			else if (tipo == "brocolis") {
                soma += (numero * 34);
            }
		}

		if (soma < 110) {
			cout << "Mais " << 110-soma << " mg" << endl;
		} 
		else if (soma > 130) {
			cout << "Menos " << soma-130 << " mg" << endl;
		}
		else {
			cout << soma << " mg" << endl;
		}

		cin >> qntd;
	}
}
