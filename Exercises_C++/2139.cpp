#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int mes, dia,soma;
	while (cin >> mes >> dia){

	if (mes == 12 and dia == 24){
		cout << "E vespera de natal!" << endl;
	}
	else if (mes == 12 and dia == 25) {
		cout << "E natal!" << endl;
	}
	else if (mes == 12 and dia > 25) {
		cout << "Ja passou!" << endl;
	}
	else if (mes == 12) {
		soma = 25 - dia;
		cout << "Faltam " << soma << " dias para o natal!" << endl;
	}
	
	else if (mes < 12) {
		
		int meses [] = {31,29,31,30,31,30,31,31,30,31,30,25};
		int soma1 = 0;
		int count = mes;
		while (count <= 12) {
			soma1 += meses[count-1];
			count += 1;
		}

		soma1 -= dia;
		
		cout << "Faltam " << soma1 << " dias para o natal!" << endl;

	}



	}
}
