#include <iostream>
using namespace std;

int main() {

    int numero;
    cin >> numero;

    int count,dentro,fora,x;
    count = 0;
    dentro = 0;
    fora = 0;
    while (count < numero) {
        cin >> x;
        if (x >= 10 and x <= 20) {
            dentro += 1;
        }
        else {
            fora += 1;
        }
        count += 1;
    }

cout << dentro << " in" << endl;
cout << fora << " out" << endl;

}