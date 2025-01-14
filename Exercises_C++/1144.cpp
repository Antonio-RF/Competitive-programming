#include <iostream>
using namespace std;

int main() {

    int qntd_de_vezes, count;
    cin >> qntd_de_vezes;


    for (int c = 1 ; c <= qntd_de_vezes ; c++) {
        cout << c << " " << c * c << " " << c * c * c << endl;
        cout << c << " " << (c * c) + 1 << " " << (c * c * c) + 1 << endl;
    }
}