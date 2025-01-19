#include <iostream>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    while (x != y) {
        if ((y - x) < 0) {
            cout << "Decrescente" << endl;
        } 
        else {
            cout << "Crescente" << endl;
        }

        cin >> x >> y;
    }
}