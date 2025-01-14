#include <iostream>
using namespace std;

int main(){

    float a,b,c;
    cin >> a >> b >> c;


    double maior;
    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    if (maior == a) {
        if (a >= (b + c)) {
            cout << "NAO FORMA TRIANGULO" << endl;
        }
        else {
            if ((a * a) == ((b * b) + (c * c))) {
                cout << "TRIANGULO RETANGULO" << endl;
            }
            if ((a * a) > ((b * b) + (c * c))) {
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            if ((a * a) < ((b * b) + (c * c))) {
                cout << "TRIANGULO ACUTANGULO" << endl;
            }
            if ((a == b and a == c)) {
                cout << "TRIANGULO EQUILATERO" << endl;
            }
            if ((a == b and a != c) or (a == c and a != b) or (b == c and b != a)) {
                cout << "TRIANGULO ISOSCELES" << endl;
            }
        }
    }
    else if (maior == b) {
        if (b >= (a + c)) {
            cout << "NAO FORMA TRIANGULO" << endl;
        }
        else {
            if ((b * b) == ((a * a) + (c * c))) {
                cout << "TRIANGULO RETANGULO" << endl;
            }
            if ((b * b) > ((a * a) + (c * c))) {
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            if ((b * b) < ((a * a) + (c * c))) {
                cout << "TRIANGULO ACUTANGULO" << endl;
            }
            if ((a == b and a == c)) {
                cout << "TRIANGULO EQUILATERO" << endl;
            }
            if ((a == b and a != c) or (a == c and a != b) or (b == c and b != a)) {
                cout << "TRIANGULO ISOSCELES" << endl;
            }
        }
    }
    else if (maior == c) {
        if (c >= (b + a)) {
            cout << "NAO FORMA TRIANGULO" << endl;
        }
        else {
            if ((c * c) == ((b * b) + (a * a))) {
                cout << "TRIANGULO RETANGULO" << endl;
            }
            if ((c * c) > ((b * b) + (a * a))) {
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            if ((c * c) < ((b * b) + (a * a))) {
                cout << "TRIANGULO ACUTANGULO" << endl;
            }
            if ((a == b and a == c)) {
                cout << "TRIANGULO EQUILATERO" << endl;
            }
            if ((a == b and a != c) or (a == c and a != b) or (b == c and b != a)) {
                cout << "TRIANGULO ISOSCELES" << endl;
            }
        }
    }
}
