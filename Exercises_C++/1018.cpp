#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int copia;
    copia = x;

    int cem, cinquenta, vinte, dez, cinco, dois, um;
    cem = 0;
    cinquenta = 0;
    vinte = 0;
    dez = 0;
    cinco = 0;
    dois = 0;
    um = 0;

    while (x != 0) {
        if (x / 100 > 0) {
            cem = x / 100;
            x = x % 100;
        } else if (x / 50 > 0) {
            cinquenta = x / 50;
            x = x % 50;
        } else if (x / 20 > 0) {
            vinte = x / 20;
            x = x % 20;
        } else if (x / 10 > 0) {
            dez = x / 10;
            x = x % 10;
        } else if (x / 5 > 0) {
            cinco = x / 5;
            x = x % 5;
        } else if (x / 2 > 0) {
            dois = x / 2;
            x = x % 2;
        } else {
            um = x;
            x = 0;
        }
    }

    cout << copia << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << vinte << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}
