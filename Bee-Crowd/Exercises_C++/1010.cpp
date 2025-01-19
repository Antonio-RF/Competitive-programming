#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int codigo1;
    int qntd1;
    float preco1;
    cin >> codigo1 >> qntd1 >> preco1;

    int codigo2;
    int qntd2;
    float preco2;
    cin >> codigo2 >> qntd2 >> preco2;

    float soma;
    soma = ((qntd1 * preco1) + (qntd2 * preco2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << soma << endl;

}