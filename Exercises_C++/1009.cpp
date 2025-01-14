#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string nome;
    cin >> nome;

    double fixo;
    cin >> fixo;

    double vendas;
    cin >> vendas;

    double bonus;
    bonus = vendas * 0.15;

    double total;
    total = fixo + bonus;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

}