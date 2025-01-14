#include <iostream>
using namespace std;

int main() {

    int numero,c,count;
    cin >> numero;
    count = 1;

    while (count < 7) {
        if (numero % 2 == 0) {
            numero = numero + 1;
        }
        
        cout << numero << endl;
        count += 1;
        numero += 2;
    }
}