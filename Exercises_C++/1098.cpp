#include <iostream>
using namespace std;

int main() {

    int k,c1,c2;
    c1 = 1;
    c2 = 1;

    while (c2 <= 3) {
            cout << "I=" << "0" << " J=" << c2 << endl;
            c2 += 1;
    }

    k = 0;
    while (c1 <= 5) {
        while (c2 <= 3) {
            cout << "I=" << "0" << "." << k << " J=" << c2 << "." << k << endl;
            c2 += 1;
        }
        k += 2;
        c2 = 1;
        c1 += 1; 
    }

    while (c2 <= 3) {
            cout << "I=" << "1" << " J=" << c2+1 << endl;
            c2 += 1;
    }

    c1 = 1;
    c2 = 1;
    k = 2;
    while (c1 <= 4) {
        while (c2 <= 3) {
            cout << "I=" << "1" << "." << k << " J=" << c2+1 << "." << k << endl;
            c2 += 1;
        }
        k += 2;
        c2 = 1;
        c1 += 1; 
    }

    while (c2 <= 3) {
            cout << "I=" << "2" << " J=" << c2+2 << endl;
            c2 += 1;
    }
}