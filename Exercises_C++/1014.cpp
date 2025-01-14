#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int distancia;
    cin >> distancia;

    float combustivel;
    cin >> combustivel;

    double resultado;
    resultado = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << resultado << " km/l" << endl;

}