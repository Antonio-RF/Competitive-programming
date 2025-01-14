#include <iostream>
using namespace std;

int main() {

    double salario, novo_salario;
    cin >> salario;

    if (salario <= 2000) {
        cout << "Isento" << endl;
    }
    else{
        if (salario <= 3000) {
            novo_salario = (salario - 2000) * 0.08;
            printf("R$ %.2f\n", novo_salario);
        }
        else if (salario <= 4500) {
            novo_salario = (1000 * 0.08) + ((salario - 3000) * 0.18);
            printf("R$ %.2f\n", novo_salario);
        }
        else {
            novo_salario = (1000 * 0.08) + (1500 * 0.18) + ((salario - 4500) * 0.28);
            printf("R$ %.2f\n", novo_salario);
        }
    }
}