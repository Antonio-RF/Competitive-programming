#include <iostream>
using namespace std;

int main() {

    int count, numero;
    cin >> numero;
    count = 1;

    for (int c = 0 ; c < numero ; c++) {
        cout << count << " " << count+1 << " " << count+2 << " PUM" << endl;
        count += 4;
    }
}