#include <iostream>
using namespace std;

int main() {

    int qntd_de_vezes;
    cin >> qntd_de_vezes;
    int a,b,soma,maior,menor;

    for (int c = 0; c < qntd_de_vezes; c++) {
        soma = 0;
        cin >> a >> b;
        maior = (a + b + abs(a - b)) / 2;
        menor = (a + b - abs(a - b)) / 2;

        if ((maior - menor) <= 1 ) {
            cout << "0" << endl;
        }
        else {
            if (menor % 2 == 0) {
                menor += 1;
            }
            else {
                menor += 2;
            }

            while (menor < maior) {
                soma += menor;
                menor += 2;
            }
            cout << soma << endl;
        }
    }
}