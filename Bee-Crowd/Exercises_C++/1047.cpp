#include <iostream>
using namespace std;

int main(){

    int hr_inicial, min_inicial, hr_final, min_final;
    cin >> hr_inicial >> min_inicial >> hr_final >> min_final;

    if (hr_inicial == hr_final and min_inicial == min_final) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else if (hr_inicial <= hr_final and min_inicial <= min_final) {
        int resultado_hora, resultado_min;
        resultado_hora = (((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))) / 3600;
        resultado_min = ((((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))) % 3600) / 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resultado_hora,resultado_min);
    }
    else if (hr_inicial < hr_final and min_inicial > min_final) {
        int resultado_hora, resultado_min;
        resultado_hora = (((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))) / 3600;
        resultado_min = ((((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))) % 3600) / 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resultado_hora,resultado_min);
    }
    else if (hr_inicial == hr_final and min_inicial > min_final) {
        int resultado_hora, resultado_min;
        resultado_hora = (86400 - abs((((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))))) / 3600;
        resultado_min = ((86400 - abs((((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))))) % 3600) / 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resultado_hora,resultado_min);
    }
    else {
        int resultado_hora, resultado_min;
        resultado_hora = (86400 - abs((((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))))) / 3600;
        resultado_min = ((86400 - abs((((hr_final * 3600) + (min_final * 60)) - ((hr_inicial * 3600) + (min_inicial * 60))))) % 3600) / 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resultado_hora,resultado_min);
    }
}