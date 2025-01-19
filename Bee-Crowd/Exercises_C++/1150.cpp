#include <iostream>
using namespace std;

int main() {

    int x,z;

    cin >> x;
    cin >> z;
    
    while (z <= x) {
        cin >> z;
    }

    int soma,count;
    count = 0;
    soma = 0;
    while (soma < z) {
        soma += x;
        x++;
        count++;
    }

    cout << count << endl;
}

