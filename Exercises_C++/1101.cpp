#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int x, y, maior, menor;
    cin >> x >> y;

    while (x > 0 && y > 0) {
        maior = (x + y + abs(x - y)) / 2;
        menor = (x + y - abs(x - y)) / 2;

        
        int tamanho = maior - menor + 1;
        int vetor[tamanho];
        int soma = 0;

        for (int c = 0; c < tamanho; c++) {
            vetor[c] = menor + c;
            soma += vetor[c];
        }


        for (int c = 0; c < tamanho; c++) {
            cout << vetor[c] << " ";
        }

        cout << "Sum=" << soma << endl;

        cin >> x >> y;
    }

    return 0;
}
