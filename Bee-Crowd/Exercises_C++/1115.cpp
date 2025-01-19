#include <iostream>
using namespace std;

int main() {

    int x,y;
    cin >> x >> y;

    while (x != 0 and y != 0) {
        if (x > 0 and y > 0) {
            cout << "primeiro" << endl;
        }
        else if (x > 0 and y < 0) {
            cout << "quarto" << endl;
        }
        else if (x < 0 and y > 0) {
            cout << "segundo" << endl;
        }
        else if (x < 0 and y < 0) {
            cout << "terceiro" << endl;
        }

        cin >> x >> y;
    }
}