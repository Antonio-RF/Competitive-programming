#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double a,b,c;
    cin >> a >> b >> c;

    double delta;
    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
    }
    else if (a == 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
            double r1;
            r1 = (-b + sqrt(delta)) / (2.0 * a);

            double r2;
            r2 = (-b - sqrt(delta)) / (2.0 * a);

            cout << fixed << setprecision(5);
            cout << "R1 = " << r1 << endl;
            cout << "R2 = " << r2 << endl;
    }

}