#include <iostream>
using namespace std;

int main(){

    int x;
    cin >> x;

    int horas, minutos, segundos;

    horas = x / 3600;
    minutos = (x % 3600) / 60;
    segundos = (x % 3600) % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

}

