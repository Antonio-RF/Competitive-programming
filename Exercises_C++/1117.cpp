#include <iostream>
using namespace std;

int main() {

    double nota, media,copia1,copia2;
    int count;

    cin >> nota;
    count = 0;
    if (nota >= 0 and nota <= 10) {
        count += 1;
        copia1 = nota;
    }
    else {
            cout << "nota invalida" << endl;
        }

    while (count < 2) {
        cin >> nota;
        if (nota >= 0 and nota <= 10 and count == 0) {
        count += 1;
        copia1 = nota;
        }
        else if (nota >= 0 and nota <= 10 and count == 1) {
        count += 1;
        copia2 = nota;
        }
        else {
            cout << "nota invalida" << endl;
        }
    }
    media = (copia1 + copia2) / 2;
    printf("media = %.2f\n", media);
}