#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd,mat;
	double maior;
	cin >> qntd;
	maior = 0;
	mat = 0;

	for (int c=0 ; c < qntd ; c++) {

		long long matricula;
		double nota;

		cin >> matricula >> nota;
		if (nota > maior) {
			maior = nota;
			mat = matricula;
		}	
		
	}

	if (maior >= 8) {
		cout << mat << endl;
	}
	else {
		cout << "Minimum note not reached" << endl;
	}

}
