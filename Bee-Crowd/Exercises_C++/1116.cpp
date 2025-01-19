#include <iostream>
using namespace std;

int main() {

    int qntd_de_vezes,x,y;
    double divisao;

    cin >> qntd_de_vezes;

    for (int c = 0; c < qntd_de_vezes; c++) {

        cin >> x >> y;
        if (y == 0) {
            cout << "divisao impossivel" << endl;
        }
        else {
            divisao = (1.0 * x) / y;
            printf("%.1f\n", divisao);
        }
    }
}