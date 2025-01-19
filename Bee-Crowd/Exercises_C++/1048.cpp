#include <iostream>
using namespace std;

int main(){

    double salario;
    cin >> salario;

    double novo_salario,reajuste;
    int percentual;
    if (salario <= 400.00) {
        novo_salario = salario + (salario * 0.15);
        reajuste = salario * 0.15;
        percentual = 15;
    }
    else if (salario <= 800.00) {
        novo_salario = salario + (salario * 0.12);
        reajuste = salario * 0.12;
        percentual = 12;
    }
    else if (salario <= 1200.00) {
        novo_salario = salario + (salario * 0.10);
        reajuste = salario * 0.10;
        percentual = 10;
    }
    else if (salario <= 2000.00) {
        novo_salario = salario + (salario * 0.07);
        reajuste = salario * 0.07;
        percentual = 7;
    }
    else {
        novo_salario = salario + (salario * 0.04);
        reajuste = salario * 0.04;
        percentual = 4;
    }

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n",percentual);
}