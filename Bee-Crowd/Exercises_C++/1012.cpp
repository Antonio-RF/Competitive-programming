#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float a;
    float b;
    float c;
    cin >> a >> b >> c;

    double triangulo;
    triangulo = (a * c) / 2;

    double circulo;
    circulo = 3.14159 * c * c;

    double trapezio;
    trapezio = ((a + b) * c) / 2;

    double quadrado;
    quadrado = b * b;

    double retangulo;
    retangulo = a * b;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

}