#include <iostream>
using namespace std;

int main() {

    int numero,n;
    cin >> numero;
    n = 1;
    while (n != 10000) {
        if (n % numero == 2){
            cout << n << endl;
        }
        n += 1;
    }
}