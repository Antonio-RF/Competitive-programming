#include <iostream>
using namespace std;

int main() {

    int al,ga,di,count;
    al = 0;
    ga = 0;
    di = 0;
    count = 0;

    while (count != 4) {
        cin >> count;

        if (count == 1) {
            al += 1;
        }
        else if (count == 2) {
            ga += 1;
        }
        else if (count == 3) {
            di += 1;
        }
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << ga << endl;
    cout << "Diesel: " << di << endl;
}
