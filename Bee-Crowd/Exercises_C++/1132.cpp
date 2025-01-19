#include <iostream>
using namespace std;

int main() {

    int x,y,maior,menor,soma;
    cin >> x;
    cin >> y;

    maior = (x + y + abs(x-y)) / 2;
    menor = (x + y - abs(x-y)) / 2;
    soma = 0;


    for (int c = menor; c <= maior; c++) {
        if (c % 13 != 0) {
            soma += c;
        }
    }

    cout << soma << endl;
}