#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
        cout << "Invalido" << endl;
    } else {
        bool isEquilatero = (a == b && b == c);
        bool isIsoceles = (a == b || b == c || a == c);
        bool isRetangulo = (a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b);

        if (isEquilatero) {
            cout << "Valido-Equilatero" << endl;
        } else if (isIsoceles) {
            cout << "Valido-Isoceles" << endl;
        } else {
            cout << "Valido-Escaleno" << endl;
        }

        if (isRetangulo) {
            cout << "Retangulo: S" << endl;
        } else {
            cout << "Retangulo: N" << endl;
        }
    }

    return 0;
}

