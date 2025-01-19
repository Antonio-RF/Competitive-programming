#include <iostream>
using namespace std;

int main() {

    string dia_i, dia_f, ponto;
    int nmr_dia_i, nmr_dia_f, hora_i, min_i, segundo_i, hora_f, min_f, segundo_f;
    cin >> dia_i >> nmr_dia_i;
    cin >> hora_i >> ponto >> min_i >> ponto >> segundo_i;
    cin >> dia_f >> nmr_dia_f;
    cin >> hora_f >> ponto >> min_f >> ponto >> segundo_f;

    int resultado_dia_i, resultado_dia_f,resultado;
    resultado_dia_i = (86400 * nmr_dia_i) + (3600 * hora_i) + (60 * min_i) + (segundo_i);
    resultado_dia_f = (86400 * nmr_dia_f) + (3600 * hora_f) + (60 * min_f) + (segundo_f);
    resultado = resultado_dia_f - resultado_dia_i;

    cout << resultado / 86400 << " dia(s)" << endl;
    cout << (resultado % 86400) / 3600 << " hora(s)" << endl;
    cout << ((resultado % 86400) % 3600) / 60 << " minuto(s)" << endl;
    cout << ((resultado % 86400) % 3600) % 60 << " segundo(s)" << endl;
}