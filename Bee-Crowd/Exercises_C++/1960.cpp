#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, numero;
    int valores[]     = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    cin >> numero;
    
    for (i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            cout << simbolos[i];
            numero -= valores[i];
        }
    }    
		cout << endl;
		return 0;
}
