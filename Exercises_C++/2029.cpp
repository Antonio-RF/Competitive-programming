#include <bits/stdc++.h>
using namespace std;

int main() {
    float volume, diametro;

    while (cin >> volume >> diametro) {
        float raio, pi = 3.14;
        raio = diametro / 2;

        double area;
        area = pi * raio * raio;

        double altura;
        altura = volume / area;

        printf("ALTURA = %.2f\n", altura);
        printf("AREA = %.2f\n", area);
    }

    return 0;
}

