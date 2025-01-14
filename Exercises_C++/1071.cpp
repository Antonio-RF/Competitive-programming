#include <iostream>
using namespace std;

int main() {

    int valor1, valor2,maior,menor;
    cin >> valor1;
    cin >> valor2;
    maior = (valor1 + valor2 + abs(valor1 - valor2)) / 2;
    menor = (valor1 + valor2 - abs(valor1 - valor2)) / 2;

    int soma;
    soma = 0;
    if (menor % 2 == 0) {
            menor += 1;
        }
    else {
        menor += 2;
    }
    while (menor < maior) {
        soma += menor;
        menor += 2;
    }

cout << soma << endl;
}