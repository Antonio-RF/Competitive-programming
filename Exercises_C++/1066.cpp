#include <iostream>
using namespace std;

int main() {

    int n, count,pares,impares,positivos,negativos;
    count = 1;
    pares = 0;
    impares = 0;
    positivos = 0;
    negativos = 0;

    while (count != 6) {
        cin >> n;
        if (n % 2 == 0) {
            pares += 1;
        }
        if (n % 2 != 0) {
            impares += 1;
        }
        if (n > 0) {
            positivos += 1;
        }
        if (n < 0) {
            negativos += 1;
        }
        count += 1;
    }

cout << pares << " valor(es) par(es)" << endl;
cout << impares << " valor(es) impar(es)" << endl;
cout << positivos << " valor(es) positivo(s)" << endl;
cout << negativos << " valor(es) negativo(s)" << endl;
}