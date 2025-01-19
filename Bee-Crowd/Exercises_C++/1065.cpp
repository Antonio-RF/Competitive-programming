#include <iostream>
using namespace std;

int main() {

    int n, count,pares;
    count = 1;
    pares = 0;
    while (count != 6) {
        cin >> n;
        if (n % 2 == 0) {
            pares += 1;
        }
        count += 1;
    }

cout << pares << " valores pares" << endl;

}