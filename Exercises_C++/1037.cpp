#include <iostream>
using namespace std;

int main(){

    double x;
    cin >> x;

    if ((0.0000 <= x) and (x <= 25.0000)) {
        cout << "Intervalo [0,25]" << endl;
    }
    else if ((25.00000 < x) and (x <= 50.0000)){
        cout << "Intervalo (25,50]" << endl;
    }
    else if ((50.0000 < x) and (x <= 75.0000)){
        cout << "Intervalo (50,75]" << endl;
    }
    else if ((75.0000 < x) and (x <= 100.0000)){
        cout << "Intervalo (75,100]" << endl;
    }
    else {
        cout << "Fora de intervalo" << endl;
    }

}