#include <iostream>
using namespace std;

int main() {

    int qntd_de_vezes, numero;
    cin >> qntd_de_vezes;

    int count;
    bool par, positivo;
    count = 0;
    while (count < qntd_de_vezes) {
        cin >> numero;
        par = false;
        positivo = false;

        if (numero % 2 == 0) {
            par = true;
        }
        if (numero > 0) {
            positivo = true;
        }

        if (numero == 0) {
            cout << "NULL" << endl;
        }
        else if (par and positivo) {
            cout << "EVEN POSITIVE" << endl;
        }
        else if (par == false and positivo) {
            cout << "ODD POSITIVE" << endl;
        }
        else if (par and positivo == false) {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if (par == false and positivo == false) {
            cout << "ODD NEGATIVE" << endl;
        }
        count += 1;
    }
}