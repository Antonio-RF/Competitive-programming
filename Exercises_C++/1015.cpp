#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float x1, y1;
    cin >> x1 >> y1;

    float x2, y2;
    cin >> x2 >> y2;


    double subtracao_ab = x2 - x1;
    double subtracao_or = y2 - y1;


    double distancia = sqrt(pow(subtracao_ab, 2) + pow(subtracao_or, 2));


    cout << fixed << setprecision(4);
    cout << distancia << endl;

    return 0;
}
