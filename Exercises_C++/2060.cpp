#include <bits/stdc++.h>
using namespace std;

int main() {

	int tamanho;
	cin >> tamanho;

	int vetor[tamanho],count2,count3,count4,count5;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	count5 = 0;
	for (int c=0 ; c<tamanho ; c++) {
		cin >> vetor[c];
		if (vetor[c] % 2 == 0) {
			count2 += 1;
		}
		if (vetor[c] % 3 == 0) {
            count3 += 1;
        }
		if (vetor[c] % 4 == 0) {
            count4 += 1;
        }
		if (vetor[c] % 5 == 0) {
            count5 += 1;
        }
	}

	cout << count2 << " Multiplo(s) de 2" << endl;
	cout << count3 << " Multiplo(s) de 3" << endl;
	cout << count4 << " Multiplo(s) de 4" << endl;
	cout << count5 << " Multiplo(s) de 5" << endl;
}
