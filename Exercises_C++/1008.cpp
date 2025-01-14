#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int numero;
    cin >> numero;

    int horas;
    cin >> horas;

    float qntd_por_hora;
    cin >> qntd_por_hora;

    float salario;
    salario = horas * qntd_por_hora;

    cout << "NUMBER = " << numero << endl;
    
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;

}