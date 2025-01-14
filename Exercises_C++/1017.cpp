#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int tempo;
    cin >> tempo;

    int velocidade;
    cin >> velocidade;

    int distancia;
    distancia = tempo * velocidade;

    double litros;
    litros = distancia / 12.0;

    cout << fixed << setprecision(3);
    cout << litros << endl;
}