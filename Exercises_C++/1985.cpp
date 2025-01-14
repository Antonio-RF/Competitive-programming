#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;

	double soma;
	soma = 0;

	for (int c=0 ; c < qntd ; c++) {

		int nmr,n;
		cin >> nmr >> n;

		if (nmr == 1001) {
			soma += (1.5 * n);
		}
		else if (nmr == 1002) {
            soma += (2.5 * n);
        }
		else if (nmr == 1003) {
            soma += (3.5 * n);
        }
		else if (nmr == 1004) {
            soma += (4.5 * n);
        }
		else if (nmr == 1005) {
            soma += (5.5 * n);
        }

	}

	printf("%.2f\n", soma);



}
