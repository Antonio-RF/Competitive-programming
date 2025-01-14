#include <iostream>
using namespace std;

int main() {

    int numero,count,maior,new_number,posicao,copia_primeiro;
    cin >> numero;

    copia_primeiro = numero;
    maior = numero;
    count = 1;
    while (count <= 99) {
        cin >> new_number;
        
        if (new_number > numero) {
            maior = new_number;
            numero = new_number;
            posicao = count + 1;
        }
        count += 1;
    }

    if (maior == copia_primeiro) {
        cout << maior << endl;
        cout << "1" << endl;
    }
    else {
        cout << maior << endl;
        cout << posicao << endl;
    }
}