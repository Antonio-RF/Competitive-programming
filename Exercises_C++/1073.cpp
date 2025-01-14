#include <iostream>
using namespace std;

int main() {

    int n, count,pares;
    count = 2;
    cin >> n;
    while (count <= n) {
        cout << count << "^" << "2" << " = " << count * count << endl;
        count += 2;
    }

}