#include <iostream>
using namespace std;

int main() {

    int x,y,maior,menor;
    cin >> x;
    cin >> y;

    maior = (x + y + abs(x-y)) / 2;
    menor = (x + y - abs(x-y)) / 2;


    for (int c = menor+1; c < maior; c++) {
        if (c % 5 == 2 or c % 5 == 3) {
            cout << c << endl;
        }
    }
}