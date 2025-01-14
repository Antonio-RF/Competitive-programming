#include <iostream>
using namespace std;

int main() {

    int k,c1,c2;
    c1 = 1;
    c2 = 1;
    k = 7;

    while (c1 <= 9) {
        while (c2 <= 3) {
            cout << "I=" << c1 << " J=" << k << endl;
            k -= 1;
            c2 += 1;
        }
        k += 5;
        c2 = 1;
        c1 += 2; 
    }
}