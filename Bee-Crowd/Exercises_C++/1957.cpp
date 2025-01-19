#include <bits/stdc++.h>
using namespace std;

int main() {
    int numero, novo, x, count;
    char vetor[100];

    cin >> numero;
    novo = numero;
    count = 0;

    while (novo != 0) {
        x = novo % 16;
        novo = novo / 16;

        if (x <= 9) {
            vetor[count] = '0' + x;
        } else {
            vetor[count] = 'A' + (x - 10);
        }
        count += 1;
    }

    for (int c = count - 1; c > 0; c--) {
        cout << vetor[c];
    }	

	cout << vetor[0] << endl;

    return 0;
}

