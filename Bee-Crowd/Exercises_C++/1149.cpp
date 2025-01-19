#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    int a, i, valor, soma = 0;
    ss >> a; 

    while (ss >> valor) {
        i = valor;
    }

    for (int c = 0 ; c <= (i-1) ; c++) {
        soma += a + c;
    }

    cout << soma << endl;

    return 0;
}