#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;
	for (int c=0 ; c<qntd ; c++) {

		string palavra1;
		cin >> palavra1;

		double tamanho = palavra1.length();
		tamanho = tamanho * 0.01;
		
		printf("%.2f\n", tamanho);
		
	}

}
